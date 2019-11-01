#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 10;
	int Arr[n];
	int even_n = 0;
	int odd_n = 0;
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 100;
		cout << Arr[i] << "\t";
		Arr[i] % 2 == 0 ? even_n++ : odd_n++;
	}cout << endl;
	int *Even_value = new int[even_n];
	int *Odd_value = new int[odd_n];
	for (int i = 0, j=0,k=0; i < n; i++)
	{
		Arr[i] % 2 == 0 ? Even_value[j++] = Arr[i] : Odd_value[k++] = Arr[i];
	}
	for (int i = 0; i < even_n; i++)
	{
		cout << Even_value[i] << "\t";
	}cout << endl;
	for (int i = 0; i < odd_n; i++)
	{
		cout << Odd_value[i] << "\t";
	}cout << endl;
}