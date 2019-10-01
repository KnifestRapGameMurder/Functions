#include"Functions.h"
#include"Print.cpp"
#include"FillRand.cpp"
#include"Sort.cpp"
#include"Stat.cpp"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	DEV
	//	1
	int Arr[n];
	FillRand(Arr, n);
	Print(Arr, n);
	cout << DELIMITER << endl;
	Sort(Arr, n);
	Print(Arr, n); cout << endl;
	cout << "Сумма єлементов массива: " << Sum(Arr, n) << endl;
	cout << "Среднее арифметическое єлементов массива: " << Avg(Arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(Arr, n) << endl;
	DEV
	//	2
	int Crr[ROWS][COLS];
	FillRand(Crr, ROWS, COLS);
	Print(Crr, ROWS, COLS);
	cout << DELIMITER << endl;
	Sort(Crr, ROWS, COLS);
	Print(Crr, ROWS, COLS); cout << endl;
	cout << "Сумма массива: " << Sum(Crr, ROWS, COLS) << endl;;
	cout << "Среднее арифметическое элементов массива: " << Avg(Crr, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Crr, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(Crr, ROWS, COLS) << endl;
	DEV
	//	3
	double Drr[ROWS][COLS];
	FillRand(Drr, ROWS, COLS);
	Print(Drr, ROWS, COLS);
	cout << DELIMITER << endl;
	Sort(Drr, ROWS, COLS);
	Print(Drr, ROWS, COLS); cout << endl;
	cout << "Сумма массива: " << Sum(Drr, ROWS, COLS) << endl;;
	cout << "Среднее арифметическое элементов массива: " << Avg(Drr, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Drr, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(Drr, ROWS, COLS) << endl;
	DEV

}