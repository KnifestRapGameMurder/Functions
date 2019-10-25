#include<iostream>
using namespace std;

void Exchange(int a, int b);

void main()
{
	int a = 2;
	int b = 3;
	cout << a << "\t" << b << endl;
	Exchange(a, b);
}
void Exchange(int a, int b)
{
	int buffer = a;
	a = b;
	b = buffer;
	cout << a << "\t" << b << endl;
}