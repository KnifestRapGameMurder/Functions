#include<iostream>
#include<Windows.h>
using namespace std;

void inputLine(char str[], const int n);
int StrLen(char str[]);
void UpperCase(char str[], const int n);
void LowerCase(char str[], const int n);
void Capitalize(char str[], const int n);
void Shrink(char str[], const int n);
void RemoveSpaces(char str[], const int n);
void isPalindrome(char str[], const int n);


void main()
{
	setlocale(LC_ALL, "Rus");
	/*char str[] = { 'H','e','l', 'l', 'o', '\0'};*/
	/*char str[] = "Hello";
	cout << sizeof("Hello") << endl;
	cout << sizeof(str) << endl;
	cout << str << endl;*/
	const int n = 256;
	char str[n];
	cout << "¬ведите строку: "; 
	inputLine(str, n);
	cout << str << endl;
	cout << StrLen(str) << endl;
	isPalindrome(str, n);
	Capitalize(str, n);
	cout << str << endl;
	UpperCase(str, n);
	cout << str << endl;
	LowerCase(str, n);
	cout << str << endl;
	Shrink(str, n);
	cout << str << endl;
	RemoveSpaces(str, n);
	cout << str << endl;
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
void UpperCase(char str[], const int n)
{
	for (int i = 0; str[i]; i++)	if (((int)str[i] > 96 && (int)str[i] < 123) || ((int)str[i] > 223 && (int)str[i] < 256))	str[i] = (int)str[i] - 32;
}
void LowerCase(char str[], const int n)
{
	for (int i = 0; str[i]; i++)	if (((int)str[i] > 64 && (int)str[i] < 91) || ((int)str[i] > 191 && (int)str[i] < 224))	str[i] = (int)str[i] + 32;
}
void Capitalize(char str[], const int n)
{
	for (int i = 0; str[i]; i++)	if (((int)str[i] > 96 && (int)str[i] < 123 || (int)str[i] > 223 && (int)str[i] < 256) && ((int)str[i-1]==32|| i==0))	str[i] = (int)str[i] - 32;
}
void Shrink(char str[], const int n)
{
	for (int i = 0; str[i]; i++)	if ((int)str[i] == 32)	while((int)str[i + 1] == 32) { for (int j = i; str[j]; j++) str[j] = str[j+1];};
}
void RemoveSpaces(char str[], const int n)
{
	for (int i = 0; str[i]; i++)	if ((int)str[i] == 32)	for (int j = i; str[j]; j++) str[j] = str[j + 1];
}
void isPalindrome(char str[], const int n)
{
	char t = 1;
	for (int i = 0; i < StrLen(str)-i-1; i++)
	{
		if (str[i] != str[StrLen(str) - i - 1])
		{
			cout << "Isn't palidrome" << endl; t = 0; return;
		}
	}
	if(t) 	cout << "Is palidrome" << endl;
}