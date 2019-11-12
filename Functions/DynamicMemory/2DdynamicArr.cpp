#include"Functions.h"

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
int** insert_row(int** arr, int& m, const int n, int& index)
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
	for (int i = 0; i < m - 1; i++)	buffer[i] = arr[i + 1];
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
	for (int i = 0; i < m; i++)
	{
		int* buffer = new int[n + 1]{};
		for (int j = 0; j < n; j++) buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	n++;
	return arr;
}
int** push_col_front(int** arr, const int m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		int* buffer = new int[n + 1]{};
		for (int j = 0; j < n; j++) buffer[j + 1] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	n++;
	return arr;
}
int** insert_col(int** arr, const int m, int& n, int& index)
{
	for (int i = 0; i < m; i++)
	{
		int* buffer = new int[n + 1]{};
		for (int j = 0; j < n; j++) j < index ? buffer[j] = arr[i][j] : buffer[j + 1] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	n++;
	return arr;
}

int** pop_col_back(int** arr, const int m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		int* buffer = new int[n - 1]{};
		for (int j = 0; j < n - 1; j++) buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	n--;
	return arr;
}
int** pop_col_front(int** arr, const int m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		int* buffer = new int[n - 1]{};
		for (int j = 0; j < n - 1; j++) buffer[j] = arr[i][j + 1];
		delete[] arr[i];
		arr[i] = buffer;
	}
	n--;
	return arr;
}
int** erase_col(int** arr, const int m, int& n, int& index)
{
	for (int i = 0; i < m; i++)
	{
		int* buffer = new int[n - 1]{};
		for (int j = 0; j < n; j++) j < index ? buffer[j] = arr[i][j] : buffer[j] = arr[i][j + 1];
		delete[] arr[i];
		arr[i] = buffer;
	}
	n--;
	return arr;
}

int** allocate(const int m, const int n)
{
	int** arr = new int*[m];
	for (int i = 0; i < m; i++)	arr[i] = new int[n];
	return arr;
}
void clear(int** arr, const int m)
{
	for (int i = 0; i < m; i++) delete[] arr[i];
	delete[] arr;
}