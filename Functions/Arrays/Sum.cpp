#include"Functions.h"

int Sum(int Arr[], const int n)//сумма єлемент.
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += Arr[i];
	}
	return sum;
}
int Sum(double Arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += Arr[i];
	}
	return sum;
}
int Sum(float Arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += Arr[i];
	}
	return sum;
}
int Sum(int Arr[ROWS][COLS], const int ROWS, const int COLS)
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
int Sum(double Arr[ROWS][COLS], const int ROWS, const int COLS)
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
int Sum(float Arr[ROWS][COLS], const int ROWS, const int COLS)
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
