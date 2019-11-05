#include<iostream>
using namespace std;

void print(int arr[], int n);
void push_back(int arr[], int n);
void push_front(int arr[], int n);
void insert(int arr[], int n);
void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер массива: "; cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++) cout << (arr[i] = rand() % 100) << "\t"; cout << endl;
	insert(arr, n);
	push_back(arr, n);
	push_front(arr, n);
	delete[] arr;
}

void print(int arr[], int n)
{
	for (int i = 0; i < n; i++) cout << arr[i] << "\t"; cout << endl;
}
void push_back(int arr[],int n)
{
	//Добавление элемента в конец массива
	int value;
	cout << "Введите добавляемое значение: "; cin >> value;
	//1)Создаем буфферный массив размером на 1 элемент больше
	int* buffer = new int[n + 1]{};
	//2)Копируем содержимое исходного массива в новый
	for (int i = 0; i < n; i++) buffer[i] = arr[i];
	//3)Удаляем исходный массив из памяти
	delete[] arr;
	arr = buffer;
	arr[n] = value;
	n++;
	print(arr, n);
}
void push_front(int arr[], int n)
{
	//Добавление элемента в конец массива
	int value;
	cout << "Введите добавляемое значение: "; cin >> value;
	//1)Создаем буфферный массив размером на 1 элемент больше
	int* buffer = new int[n + 1]{};
	//2)Копируем содержимое исходного массива в новый
	for (int i = 0; i < n; i++) buffer[i+1] = arr[i];
	//3)Удаляем исходный массив из памяти
	delete[] arr;
	arr = buffer;
	arr[0] = value;
	n++;
	print(arr, n);
}
void insert(int arr[], int n)
{
	//Добавление элемента в конец массива
	int value;
	int index;
	cout << "Введите добавляемое значение: "; cin >> value;
	cout << "Введите индекс: "; cin >> index;
	//1)Создаем буфферный массив размером на 1 элемент больше
	int* buffer = new int[n + 1]{};
	//2)Копируем содержимое исходного массива в новый
	for (int i = 0; i < n; i++) i < index  ? buffer[i] = arr[i] : buffer[i+1] = arr[i];
	//3)Удаляем исходный массив из памяти
	delete[] arr;
	arr = buffer;
	arr[index] = value;
	n++;
	print(arr, n);
}