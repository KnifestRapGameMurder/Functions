#include"Functions.h"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int Arr[n];
	cout << endl;
	FillRand(Arr, n);
	Print(Arr, n);
	cout << "Сумма єлементов массива: " << Sum(Arr, n) << endl;
	cout << "Среднее арифметическое єлементов массива: " << Avg(Arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(Arr, n) << endl;

	double Brr[n];
	FillRand(Brr, n);
	Print(Brr, n);
	Sort(Brr, n);
	cout << "Сумма єлементов массива: " << Sum(Brr, n) << endl;
	cout << "Среднее арифметическое єлементов массива: " << Avg(Brr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Brr, n) << endl;

	float Drr[n];
	FillRand(Drr, n);
	Print(Drr, n);
	cout << "Сумма єлементов массива: " << Sum(Drr, n) << endl;
	cout << "Среднее арифметическое єлементов массива: " << Avg(Drr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Drr, n) << endl;


	int Crr[ROWS][COLS];
	FillRand(Crr, ROWS, COLS);
	Print(Crr, ROWS, COLS);
	Sort(Crr, ROWS, COLS);
	cout << DELIMITER << endl;
	Print(Crr, ROWS, COLS);
	cout << "Сумма массива: " << Sum(Crr, ROWS, COLS) << endl;;
	cout << "Среднее арифметическое элементов массива: " << Avg(Crr, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Crr, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(Crr, ROWS, COLS) << endl;

	double Err[ROWS][COLS];
	FillRand(Err, ROWS, COLS);
	Print(Err, ROWS, COLS);
	Sort(Err, ROWS, COLS);
	cout << DELIMITER << endl;
	Print(Err, ROWS, COLS);
	cout << "Сумма массива: " << Sum(Err, ROWS, COLS) << endl;;
	cout << "Среднее арифметическое элементов массива: " << Avg(Err, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Err, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(Err, ROWS, COLS) << endl;

	float Frr[ROWS][COLS];
	FillRand(Frr, ROWS, COLS);
	Print(Frr, ROWS, COLS);
	Sort(Frr, ROWS, COLS);
	cout << DELIMITER << endl;
	Print(Frr, ROWS, COLS);
	cout << "Сумма массива: " << Sum(Frr, ROWS, COLS) << endl;;
	cout << "Среднее арифметическое элементов массива: " << Avg(Frr, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Frr, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(Frr, ROWS, COLS) << endl;


}
