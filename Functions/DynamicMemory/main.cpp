#include<iostream>
using namespace std;

//#define DYNAMIC_MEMORY_1 
//#define PUSH_ROW
#define PUSH_COL

void print(int arr[], int n);
int* push_back(int arr[], int& n,int value);
int* push_front(int arr[], int& n,int value);
int* insert(int arr[], int& n, int value);

int* pop_back(int arr[], int& n, int value);
int* pop_front(int arr[], int& n, int value);
int* erase(int arr[], int& n, int value);

int** push_row_back(int** arr, int& m, const int n);
int** push_row_front(int** arr, int& m, const int n);
int** insert_row(int** arr, int& m, const int n,int& index);

int** pop_row_back(int** arr, int& m, const int n);
int** pop_row_front(int** arr, int& m, const int n);
int** erase_row(int** arr, int& m, const int n, int& index);

int** push_col_back(int** arr, const int m, int& n);
int** push_col_front(int** arr, const int m, int& n);
int** insert_col(int** arr, const int m, int& n, int& index);

int** pop_col_back(int** arr, const int m, int& n);
int** pop_col_front(int** arr, const int m, int& n);
int** erase_col(int** arr, const int m, int& n, int& index);

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
#ifdef PUSH_ROW
	Arr = push_row_back(Arr, m, n);
	Print(Arr, m, n);
	Arr = push_row_front(Arr, m, n);
	Print(Arr, m, n);
	int index;
	do { cout << "Введите индекс добавляемой строки: "; cin >> index; } while (index >= m);
	Arr = insert_row(Arr, m, n, index);
	Print(Arr, m, n);
	cout << "____________________________________________________________________\n" << endl;
	Arr = pop_row_back(Arr, m, n);
	Print(Arr, m, n);
	Arr = pop_row_front(Arr, m, n);
	Print(Arr, m, n);
	do { cout << "Введите индекс отнимаемой строки: "; cin >> index; } while (index >= m);
	Arr = erase_row(Arr, m, n, index);
	Print(Arr, m, n);
#endif											// PUSH_ROW
	
#ifdef PUSH_COL
	Arr = push_col_back(Arr, m, n);
	Print(Arr, m, n);
	Arr = push_col_front(Arr, m, n);
	Print(Arr, m, n);
	int index;
	do { cout << "Введите индекс добавляемой колоны: "; cin >> index; } while (index >= n);
	Arr = insert_col(Arr, m, n, index);
	Print(Arr, m, n);
	cout << "____________________________________________________________________\n" << endl;
	Arr = pop_col_back(Arr, m, n);
	Print(Arr, m, n);
	Arr = pop_col_front(Arr, m, n);
	Print(Arr, m, n);
	do { cout << "Введите индекс отнимаемой колоны: "; cin >> index; } while (index >= n);
	Arr = erase_col(Arr, m, n, index);
	Print(Arr, m, n);
#endif											// PUSH_COL

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
	/*int** buffer = new int*[m + 1];
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
	return arr;*/
	int** buffer = new int*[m + 1];
	for (int i = 0; i < m; i++)	buffer[i] = arr[i];
	delete arr;
	arr = buffer;
	arr[m] = new int[n] {};
	m++;
	return arr;
}
int** push_row_front(int** arr, int& m, const int n)
{
	/*int** buffer = new int*[m + 1];
	for (int i = 1; i < m+1; i++)	buffer[i] = new int[n];
	for (int i = 1; i < m+1; i++)
	{
		for (int j = 0; j < n; j++)	buffer[i][j] = arr[i-1][j];
		delete[] arr[i-1];
	}
	delete arr;
	arr = buffer;
	arr[0] = new int[n] {};
	m++;
	return arr;*/
	int** buffer = new int*[m + 1];
	for (int i = 0; i < m; i++)	buffer[i + 1] = arr[i];
	delete arr;
	arr = buffer;
	arr[0] = new int[n] {};
	m++;
	return arr;
}
int** insert_row(int** arr, int& m, const int n,int& index)
{
	/*int** buffer = new int*[m + 1];
	for (int i = 0; i < m; i++)	i < index ? buffer[i] = new int[n] : buffer[i + 1] = new int[n];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) i < index ? buffer[i][j] = arr[i][j] : buffer[i + 1][j] = arr[i][j];
		delete[] arr[i];
	}
	delete arr;
	arr = buffer;
	arr[index] = new int[n] {};
	m++;
	return arr;*/
	int** buffer = new int*[m + 1];
	for (int i = 0; i < m; i++)	i < index ? buffer[i] = arr[i] : buffer[i + 1] = arr[i];
	delete arr;
	arr = buffer;
	arr[index] = new int[n] {};
	m++;
	return arr;
}

int** pop_row_back(int** arr, int& m, const int n)
{
	/*int** buffer = new int*[m-1];
	for (int i = 0; i < m-1; i++)	buffer[i] = new int[n];
	for (int i = 0; i < m-1; i++)
	{
		for (int j = 0; j < n; j++)	buffer[i][j] = arr[i][j];
		delete[] arr[i];
	}
	delete arr;
	arr = buffer;
	m--;
	return arr;*/
	int** buffer = new int*[m - 1];
	for (int i = 0; i < m - 1; i++)	buffer[i] = arr[i];
	delete arr;
	arr = buffer;
	m--;
	return arr;
}
int** pop_row_front(int** arr, int& m, const int n)
{
	/*int** buffer = new int*[m - 1];
	for (int i = 0; i < m - 1; i++)	buffer[i] = new int[n];
	for (int i = 0; i < m - 1; i++)
	{
		for (int j = 0; j < n; j++)	buffer[i][j] = arr[i + 1][j];
		delete[] arr[i];
	}
	delete arr;
	arr = buffer;
	m--;
	return arr;*/
	int** buffer = new int*[m - 1];
	for (int i = 0; i < m - 1; i++)	buffer[i] = arr[i+1];
	delete arr;
	arr = buffer;
	m--;
	return arr;
}
int** erase_row(int** arr, int& m, const int n, int& index)
{
	/*int** buffer = new int*[m - 1];
	for (int i = 0; i < m-1; i++)	buffer[i] = new int[n];
	for (int i = 0; i < m-1; i++)
	{
		for (int j = 0; j < n; j++) i < index ? buffer[i][j] = arr[i][j] : buffer[i][j] = arr[i+1][j];
		delete[] arr[i];
	}
	delete arr;
	arr = buffer;
	m--;
	return arr;*/
	int** buffer = new int*[m - 1];
	for (int i = 0; i < m - 1; i++)	i < index ? buffer[i] = arr[i] : buffer[i] = arr[i + 1];
	delete arr;
	arr = buffer;
	m--;
	return arr;
}

int** push_col_back(int** arr, const int m, int& n)
{
	int** buffer = new int* [m];
	for (int i = 0; i < m; i++)
	{
		buffer[i] = new int[n + 1];
		for(int j = 0; j < n;j++) buffer[i][j] = arr[i][j];
		buffer[i][n] = 0;
		delete[] arr[i];
	}
	delete[] arr;
	arr = buffer;
	n++;
	return arr;
}
int** push_col_front(int** arr, const int m, int& n)
{
	int** buffer = new int* [m];
	for (int i = 0; i < m; i++)
	{
		buffer[i] = new int[n + 1];
		for (int j = 0; j < n; j++) buffer[i][j+1] = arr[i][j];
		buffer[i][0] = 0;
		delete[] arr[i];
	}
	delete[] arr;
	arr = buffer;
	n++;
	return arr;
}
int** insert_col(int** arr, const int m, int& n, int& index)
{
	int** buffer = new int* [m];
	for (int i = 0; i < m; i++)
	{
		buffer[i] = new int[n + 1];
		for (int j = 0; j < n; j++) j < index ? buffer[i][j] = arr[i][j] : buffer[i][j + 1] = arr[i][j];
		buffer[i][index] = 0;
		delete[] arr[i];
	}
	delete[] arr;
	arr = buffer;
	n++;
	return arr;
}

int** pop_col_back(int** arr, const int m, int& n)
{
	int** buffer = new int* [m];
	for (int i = 0; i < m; i++)
	{
		buffer[i] = new int[n - 1];
		for (int j = 0; j < n-1; j++) buffer[i][j] = arr[i][j];
		delete[] arr[i];
	}
	delete[] arr;
	arr = buffer;
	n--;
	return arr;
}
int** pop_col_front(int** arr, const int m, int& n)
{
	int** buffer = new int* [m];
	for (int i = 0; i < m; i++)
	{
		buffer[i] = new int[n - 1];
		for (int j = 0; j < n - 1; j++) buffer[i][j] = arr[i][j+1];
		delete[] arr[i];
	}
	delete[] arr;
	arr = buffer;
	n--;
	return arr;
}
int** erase_col(int** arr, const int m, int& n, int& index)
{
	int** buffer = new int* [m];
	for (int i = 0; i < m; i++)
	{
		buffer[i] = new int[n - 1];
		for (int j = 0; j < n - 1; j++) j<index ? buffer[i][j]=arr[i][j] : buffer[i][j] = arr[i][j + 1];
		delete[] arr[i];
	}
	delete[] arr;
	arr = buffer;
	n--;
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
int* pop_back(int arr[], int& n, int value)
{
	int* buffer = new int[n - 1]{};
	for (int i = 0; i < n-1; i++) buffer[i] = arr[i];
	delete[] arr;
	arr = buffer;
	n--;
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
int* pop_front(int arr[], int& n, int value)
{
	int* buffer = new int[n - 1]{};
	for (int i = 0; i < n-1; i++) buffer[i + 1] = arr[i+1];
	delete[] arr;
	arr = buffer;
	n--;
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
int* erase(int arr[], int& n, int value)
{
	int index;
	cout << "Введите индекс: "; cin >> index;
	if (index > n)	return arr;
	int* buffer = new int[n - 1]{};
	for (int i = 0; i < n-1; i++) i < index ? buffer[i] = arr[i] : buffer[i] = arr[i+1];
	delete[] arr;
	arr = buffer;
	n--;
	return arr;
}