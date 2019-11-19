#include"Functions.h"

template <typename T>	void FillRand(T** Arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)	Arr[i][j] = rand() % 100;
		cout << endl;
	}
}
template <typename T>	void Print(T** Arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)	cout << Arr[i][j] << "\t";
		cout << endl;
	}cout << endl;
}

template <typename T>	void push_row_back(T **& arr, int& m, const int n)
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
	T** buffer = new T*[m + 1];
	for (int i = 0; i < m; i++)	buffer[i] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[m] = new T[n]{};
	m++;
	
}
template <typename T>	void push_row_front(T**& arr, int& m, const int n)
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
	T** buffer = new T*[m + 1];
	for (int i = 0; i < m; i++)	buffer[i + 1] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[0] = new T[n] {};
	m++;
}
template <typename T>	void insert_row(T**& arr, int& m, const int n, int& index)
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
	T** buffer = new T*[m + 1];
	for (int i = 0; i < m; i++)	i < index ? buffer[i] = arr[i] : buffer[i + 1] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[index] = new T[n] {};
	m++;
}

template <typename T>	void pop_row_back(T**& arr, int& m, const int n)
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
	T** buffer = new T*[m - 1];
	for (int i = 0; i < m - 1; i++)	buffer[i] = arr[i];
	delete arr;
	arr = buffer;
	m--;
}
template <typename T>	void pop_row_front(T**& arr, int& m, const int n)
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
	T** buffer = new T*[m - 1];
	for (int i = 0; i < m - 1; i++)	buffer[i] = arr[i + 1];
	delete arr;
	arr = buffer;
	m--;
}
template <typename T>	void erase_row(T**& arr, int& m, const int n, int& index)
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
	T** buffer = new T*[m - 1];
	for (int i = 0; i < m - 1; i++)	i < index ? buffer[i] = arr[i] : buffer[i] = arr[i + 1];
	delete arr;
	arr = buffer;
	m--;
}

template <typename T>	T** push_col_back(T** arr, const int m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		T* buffer = new T[n + 1]{};
		for (int j = 0; j < n; j++) buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	n++;
	return arr;
}
template <typename T>	T** push_col_front(T** arr, const int m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		T* buffer = new T[n + 1]{};
		for (int j = 0; j < n; j++) buffer[j+1] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	n++;
	return arr;
}
template <typename T>	T** insert_col(T** arr, const int m, int& n, int& index)
{
	for (int i = 0; i < m; i++)
	{
		T* buffer = new T[n + 1]{};
		for (int j = 0; j < n; j++) j < index ? buffer[j] = arr[i][j] : buffer[j + 1] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	n++;
	return arr;
}

template <typename T>	T** pop_col_back(T** arr, const int m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		T* buffer = new T[n - 1]{};
		for (int j = 0; j < n - 1; j++) buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	n--;
	return arr;
}
template <typename T>	T** pop_col_front(T** arr, const int m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		T* buffer = new T[n - 1]{};
		for (int j = 0; j < n - 1; j++) buffer[j] = arr[i][j + 1];
		delete[] arr[i];
		arr[i] = buffer;
	}
	n--;
	return arr;
}
template <typename T>	T** erase_col(T** arr, const int m, int& n, int& index)
{
	for (int i = 0; i < m; i++)
	{
		T* buffer = new T[n - 1]{};
		for (int j = 0; j < n; j++) j < index ? buffer[j] = arr[i][j] : buffer[j] = arr[i][j + 1];
		delete[] arr[i];
		arr[i] = buffer;
	}
	n--;
	return arr;
}

template <typename T>	T** allocate(const int m,const int n)
{
	T** arr = new T*[m];
	for (int i = 0; i < m; i++)	arr[i] = new T[n];
	return arr;
}
template <typename T>	void clear(T** arr, const int m)
{
	for (int i = 0; i < m; i++) delete[] arr[i];
	delete[] arr;
}