#include"Functions.h"

template <typename T>	void fill(T arr[], int n)
{
	for (int i = 0; i < n; i++) (arr[i] = rand() % 100);
}
template <typename T>	void print(T arr[], int n)
{
	for (int i = 0; i < n; i++) cout << arr[i] << "\t"; cout << endl;
}

template <typename T>	T* push_back(T arr[], int& n, T value)
{
	//Добавление элемента в конец массива


	//1)Создаем буфферный массив размером на 1 элемент больше
	T* buffer = new T[n + 1]{};
	//2)Копируем содержимое исходного массива в новый
	for (int i = 0; i < n; i++) buffer[i] = arr[i];
	//3)Удаляем исходный массив из памяти
	delete[] arr;
	arr = buffer;
	arr[n] = value;
	n++;
	return arr;
}
template <typename T>	T* pop_back(T arr[], int& n, T value)
{
	T* buffer = new T[n - 1]{};
	for (int i = 0; i < n - 1; i++) buffer[i] = arr[i];
	delete[] arr;
	arr = buffer;
	n--;
	return arr;

}

template <typename T>	T* push_front(T arr[], int& n, T value)
{
	//Добавление элемента в конец массива


	//1)Создаем буфферный массив размером на 1 элемент больше
	T* buffer = new T[n + 1]{};
	//2)Копируем содержимое исходного массива в новый
	for (int i = 0; i < n; i++) buffer[i + 1] = arr[i];
	//3)Удаляем исходный массив из памяти
	delete[] arr;
	arr = buffer;
	arr[0] = value;
	n++;
	return arr;
}
template <typename T>	T* pop_front(T arr[], int& n, T value)
{
	T* buffer = new T[n - 1]{};
	for (int i = 0; i < n - 1; i++) buffer[i + 1] = arr[i + 1];
	delete[] arr;
	arr = buffer;
	n--;
	return arr;
}

template <typename T>	T* insert(T arr[], int& n, T value)
{
	int index;
	cout << "Введите индекс: "; cin >> index;
	if (index > n)	return arr;
	T* buffer = new T[n + 1]{};
	for (int i = 0; i < n; i++) i < index ? buffer[i] = arr[i] : buffer[i + 1] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[index] = value;
	n++;
	return arr;
}
template <typename T>	T* erase(T arr[], int& n, T value)
{
	int index;
	cout << "Введите индекс: "; cin >> index;
	if (index > n)	return arr;
	T* buffer = new T[n - 1]{};
	for (int i = 0; i < n - 1; i++) i < index ? buffer[i] = arr[i] : buffer[i] = arr[i + 1];
	delete[] arr;
	arr = buffer;
	n--;
	return arr;
}