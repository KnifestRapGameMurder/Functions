#include"Functions.h"

template<typename T>void FillRand(double Arr[], const int n)
{
	//заполнение случайными числами:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 10000;
		Arr[i] /= 100;

	}
}
template<typename T>	void FillRand(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 10000;
			Arr[i][j] /= 100;
		}
	}
}