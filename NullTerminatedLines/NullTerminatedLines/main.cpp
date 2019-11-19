#include<iostream>
#include<Windows.h>
using namespace std;

void inputLine(char str[], const int n);
int StrLen(char str[]);

void main()
{
	setlocale(LC_ALL, "Rus");
	/*char str[] = { 'H','e','l', 'l', 'o', '\0'};*/
	/*char str[] = "Hello";
	cout << sizeof("Hello") << endl;
	cout << sizeof(str) << endl;
	cout << str << endl;*/
	const int n = 20;
	char str[n];
	cout << "¬ведите строку: "; 
	inputLine(str, n);
	cout << str << endl;
	cout << StrLen(str) << endl;
}

void inputLine(char str[], const int n)
{
	SetConsoleCP(1251);
	cin.getline(str, n);
	SetConsoleCP(866);
}

int StrLen(char str[])
{
	int i = 0;
	for (; str[i]; i++);
	return i;
}