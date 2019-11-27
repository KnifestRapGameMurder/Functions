#include<iostream>
#include<Windows.h>
using namespace std;

char* DecToBin(int dec);
int BinToDec(char* binary, int n);

void main()
{
	setlocale(LC_ALL, "");
	/*cout << "Введите десятичное число: "; int dec; cin >> dec;
	char* binary = DecToBin(dec);
	cout << binary << endl;
	delete[] binary;*/
	int n = 32;
	cout << "Введите двоичное число: "; char* binary = new char[n]; cin.getline(binary, n);
	n = strlen(binary);
	cout << BinToDec(binary,n) << endl;
	delete[] binary;

}

char* DecToBin(int dec)
{
	int n = 32;
	char* binary = new char[n] {};
	for (int i = 0; dec; i++, dec /= 2)binary[i] = dec % 2 + 48;
	/*for (n--; n >= 0; n--)
	{
		cout << binary[n];
		n % 8 == 0 ? cout << "  " : n % 4 == 0 ? cout << " " : cout << "";
	}
	cout << endl;*/
	n = strlen(binary);
	for (int i = 0; i< n / 2; i++)	swap(binary[i], binary[n - 1 - i]);
	return binary;
}

int BinToDec(char* binary,int n)
{
	int dec;
	if (n == 1) return 1;
	dec = (binary[0] - 48) * 2 + binary[1] - 48;
	for (int i = 2; i < n; i++)
	{
		dec = (dec * 2) + binary[i]-48;
	}
	return dec;
}