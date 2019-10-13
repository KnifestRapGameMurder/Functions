#include<iostream>
using namespace std;

#define NEXT cout<<endl;system("PAUSE");system("CLS");

void print(int n)
{
	if (n == 0)return;
	print(n - 1);	cout<<n << ". Hello Recursion!" << endl;
}

double power(int a, int n)
{
	return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / (a*power(a, n + 1));
}

int factr(int n)
{
	int result;
	return n == 1 ? 1 : result = factr(n - 1) * n;
}

int f(int n)
{
	return n == 2 || n == 3 ? 1 : n == 1 ? 0 : f(n - 1) + f(n - 2);
}

void main()
{
	setlocale(LC_ALL, "");
	int a, n;
	print(3);
	NEXT
	cout << "—колько чисел ‘ибоначи вывести на экран: "; cin >> n; cout << endl;
	if(n <= 0) cout << "\t\t!!!Error!!!" << endl;
	else for (int i = 1; i <= n; i++) cout << f(i) << " ";
	NEXT
	cout << "¬ведите основание степени: "; cin >> a; cout << endl;
	cout << "¬ведите показатель степени: "; cin >> n; cout << endl;
	cout << a << " ^ " << n << " = " << power(a, n) << endl;
	NEXT
	cout << "\t	‘акториал числа	\n¬ведите число: "; cin >> n; cout << endl;
	for (int i = 1; i <= n; i++)	i == n ? cout << i : cout << i << " * ";
	cout << " = " << factr(n) << endl;
}