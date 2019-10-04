#include<iostream>
using namespace std;

void print(int n)
{
	if (n == 0)return;
	print(n - 1);
	cout<<n << ". Hello Recursion!" << endl;
	
}

double power(int a, int n)
{
	return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / (a*power(a, n + 1));
}

void fibonacci(int double)
{
	int a = 0;
	int b = 1;
	cout << a << " " << b << " ";
	for (i = -1; i < n/4; i++)
	{
		a += b; cout << a << " ";
		b += a; cout << b << " ";
	}
	
}

void main()
{
	setlocale(LC_ALL, "");
	double a, n;
	
	/*cout << "¬ведите основание степени: "; cin >> a; cout << endl;
	cout << "¬ведите показатель степени: "; cin >> n; cout << endl;
	cout << a << " ^ " << n << " = "<< power(a, n) << endl;*/
	cout << "—колько чисел ‘ибоначи вывести на экран: "; cin >> n; cout << endl;
	fibonacci(n);

	
}