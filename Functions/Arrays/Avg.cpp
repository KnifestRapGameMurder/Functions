#include"Functions.h"

double Avg(int Arr[], const int n) //ׁנוהםוו אנטפל.
{
	/* double total = Sum(Arr, n);
	 double avg = total / n;
	 return avg;*/
	return (double)Sum(Arr, n) / n;
}
double Avg(double Arr[], const int n)
{
	return (double)Sum(Arr, n) / n;
}
double Avg(float Arr[], const int n)
{
	return (double)Sum(Arr, n) / n;
}
double Avg(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(Arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(Arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(float Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(Arr, ROWS, COLS) / (ROWS * COLS);
}
