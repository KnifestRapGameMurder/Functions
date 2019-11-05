#include<iostream>
using namespace std;

//#define DYNAMIC_MEMORY_1 
void print(int arr[], int n);
int* push_back(int arr[], int& n,int value);
int* push_front(int arr[], int& n,int value);
int** push_row_back(int** arr, int& m, const int n);
int* insert(int arr[], int& n,int value);
void FillRand(int** Arr, const int m, const int n);
void Print(int** Arr, const int m, const int n);

void main()
{
	setlocale(LC_ALL, "Rus");
	int m; //Количество строк
	int n; //Количество элементов строки
	cout << "Введите количество строк: "; cin >> m;
	cout << "Введите количество элементов строки: "; cin >> n;
	int** Arr = new int*[m];
	for (int i = 0; i < m; i++)	Arr[i] = new int[n] {};
	//////////////////////////////////////////////////////////////////////
	//			Испоьзование двумерного динамического массива
	FillRand(Arr, m, n);
	Print(Arr, m, n);
	Arr = push_row_back(Arr, m, n);
	Print(Arr, m, n);
	/////////////////////////////////////////////////////////////////////
	for (int i = 0; i < m; i++) delete[] Arr[i];
	delete[] Arr;
#ifdef DYNAMIC_MEMORY_1
	int n;
	cout << "Введите размер массива: "; cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++) cout << (arr[i] = rand()%100) << "\t"; cout << endl;
	int value;
	cout << "Введите добавляемое значение: "; cin >> value;
	arr = insert(arr, n,value);
	print(arr, n);
	delete[] arr;
#endif
}

void FillRand(int** Arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)	Arr[i][j] = rand() % 100;
		cout << endl;
	}
}

void Print(int** Arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)	cout << Arr[i][j] << "\t";
		cout << endl;
	}cout << endl;
}

int** push_row_back(int** arr, int& m, const int n)
{
	int** buffer = new int*[m + 1];
	for (int i = 0; i < m; i++)	buffer[i] = new int[n];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)	buffer[i][j] = arr[i][j];
		delete[] arr[i];
	}
	delete arr;
	arr = buffer;
	arr[m] = new int[n] {};
	m++;
	return arr;
}

void print(int arr[], int n)
{
	for (int i = 0; i < n; i++) cout << arr[i] << "\t"; cout << endl;
}
int* push_back(int arr[],int& n,int value)
{
	//Добавление элемента в конец массива
	
	
	//1)Создаем буфферный массив размером на 1 элемент больше
	int* buffer = new int[n + 1]{};
	//2)Копируем содержимое исходного массива в новый
	for (int i = 0; i < n; i++) buffer[i] = arr[i];
	//3)Удаляем исходный массив из памяти
	delete[] arr;
	arr = buffer;
	arr[n] = value;
	n++; 
	return arr;
	
}
int* push_front(int arr[], int& n,int value)
{
	//Добавление элемента в конец массива
	

	//1)Создаем буфферный массив размером на 1 элемент больше
	int* buffer = new int[n + 1]{};
	//2)Копируем содержимое исходного массива в новый
	for (int i = 0; i < n; i++) buffer[i+1] = arr[i];
	//3)Удаляем исходный массив из памяти
	delete[] arr;
	arr = buffer;
	arr[0] = value;
	n++;
	return arr;
}
int* insert(int arr[], int& n,int value)
{
	int index;		
	cout << "Введите индекс: "; cin >> index;
	if (index > n)	return arr;
	int* buffer = new int[n + 1]{};
	for (int i = 0; i < n; i++) i < index  ? buffer[i] = arr[i] : buffer[i+1] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[index] = value;
	n++;
	return arr;
}
//int* insert(int* arr, int& n, int value, int index)
//{
//	int* buffer = new int[n + 1];
//	for (int i = 0; i < index; i++)	buffer[i] = arr[i];
//	for(int i=index;i<n;i++)	buffer[]
//}