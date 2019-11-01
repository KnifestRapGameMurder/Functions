#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	cout << "¬ведите размер массива: "; cin >> n; cout << endl;
	double *Arr = new double[n] {};
	for (int i = 0; i < n; i++)
	{
		*(Arr + i) = rand() % 2;
	}
	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
	delete[] Arr;
}