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
	cout << "����� ��������� �������: " << Sum(Arr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(Arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(Arr, n) << endl;
	DEV
	//	2
	int Crr[ROWS][COLS];
	FillRand(Crr, ROWS, COLS);
	Print(Crr, ROWS, COLS);
	cout << DELIMITER << endl;
	Sort(Crr, ROWS, COLS);
	Print(Crr, ROWS, COLS); cout << endl;
	cout << "����� �������: " << Sum(Crr, ROWS, COLS) << endl;;
	cout << "������� �������������� ��������� �������: " << Avg(Crr, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Crr, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(Crr, ROWS, COLS) << endl;
	DEV
	//	3
	double Drr[ROWS][COLS];
	FillRand(Drr, ROWS, COLS);
	Print(Drr, ROWS, COLS);
	cout << DELIMITER << endl;
	Sort(Drr, ROWS, COLS);
	Print(Drr, ROWS, COLS); cout << endl;
	cout << "����� �������: " << Sum(Drr, ROWS, COLS) << endl;;
	cout << "������� �������������� ��������� �������: " << Avg(Drr, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Drr, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(Drr, ROWS, COLS) << endl;
	DEV

}