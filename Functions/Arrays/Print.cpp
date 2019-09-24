#include"Functions.h"

void Print(int Arr[], const int n)
{
	// вывод массива на экран:
	for (int i = 0; i < n; i++)cout << Arr[i] << "\t";
	cout << endl;
	cout << endl;
}
void Print(double Arr[], const int n)
{
	// вывод массива на экран:
	for (int i = 0; i < n; i++)cout << Arr[i] << "\t";
	cout << endl;
	cout << endl;
}
void Print(float Arr[], const int n)
{
	for (int i = 0; i < n; i++)cout << Arr[i] << "\t";
	cout << endl;
	cout << endl;
}
void Print(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";

		}
		cout << endl;
	}
}
void Print(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";

		}
		cout << endl;
	}
}
void Print(float Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";

		}
		cout << endl;
	}
}

