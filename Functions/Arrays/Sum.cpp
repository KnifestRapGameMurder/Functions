#include"Functions.h"

template<typename T>int Sum(T Arr[], const int n)//сумма єлемент.
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += Arr[i];
	}
	return sum;
}
template<typename T>	int Sum(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += Arr[i][j];
		}
	}
	return sum;
}