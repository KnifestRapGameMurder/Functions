#include"Functions.h"

void fill(int arr[], int n)
{
	for (int i = 0; i < n; i++) (arr[i] = rand() % 100);
}
void print(int arr[], int n)
{
	for (int i = 0; i < n; i++) cout << arr[i] << "\t"; cout << endl;
}


int* push_back(int arr[], int& n, int value)
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
	for (int i = 0; i < n - 1; i++) buffer[i] = arr[i];
	delete[] arr;
	arr = buffer;
	n--;
	return arr;

}

int* push_front(int arr[], int& n, int value)
{
	//Добавление элемента в конец массива


	//1)Создаем буфферный массив размером на 1 элемент больше
	int* buffer = new int[n + 1]{};
	//2)Копируем содержимое исходного массива в новый
	for (int i = 0; i < n; i++) buffer[i + 1] = arr[i];
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
	for (int i = 0; i < n - 1; i++) buffer[i + 1] = arr[i + 1];
	delete[] arr;
	arr = buffer;
	n--;
	return arr;
}

int* insert(int arr[], int& n, int value)
{
	int index;
	cout << "Введите индекс: "; cin >> index;
	if (index > n)	return arr;
	int* buffer = new int[n + 1]{};
	for (int i = 0; i < n; i++) i < index ? buffer[i] = arr[i] : buffer[i + 1] = arr[i];
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
	for (int i = 0; i < n - 1; i++) i < index ? buffer[i] = arr[i] : buffer[i] = arr[i + 1];
	delete[] arr;
	arr = buffer;
	n--;
	return arr;
}