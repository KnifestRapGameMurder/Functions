#include<iostream>
#include<Windows.h>

char* DecToBin(int dec);
int BinToDec(char* str, int n);
bool isBin(char* str, int n);
int HexToDec(char* str, int n);
bool isHex(char* str, int n);

void main()
{
	setlocale(LC_ALL, "");
	/*cout << "¬ведите дес€тичное число: "; int dec; cin >> dec;
	char* binary = DecToBin(dec);
	cout << binary << endl;
	delete[] binary;*/
	/*int n = 32;
	cout << "¬ведите двоичное число: "; char* str = new char[n]; cin.getline(str, n);
	n = strlen(str);*/
	int n = 11;
	std::cout << "¬ведите Hex число: "; char* str = new char[n]; std::cin.getline(str, n);
	n = strlen(str);
	if(isBin(str, n))	std::cout <<"Bin:"<< BinToDec(str,n) << std::endl;
	if (isHex(str, n)) std::cout << "Hex:" << HexToDec(str,n) << std::endl;
	delete[] str;

}

char* DecToBin(int dec)
{
	int n = 32;
	char* str = new char[n] {};
	for (int i = 0; dec; i++, dec /= 2)str[i] = dec % 2 + 48;
	/*for (n--; n >= 0; n--)
	{
		cout << binary[n];
		n % 8 == 0 ? cout << "  " : n % 4 == 0 ? cout << " " : cout << "";
	}
	cout << endl;*/
	n = strlen(str);
	for (int i = 0; i< n / 2; i++)	std::swap(str[i], str[n - 1 - i]);
	return str;
}

int BinToDec(char* str,int n)
{
	int dec;
	if (n == 1) return 1;
	dec = (str[0] - 48) * 2 + str[1] - 48;
	for (int i = 2; i < n; i++)
	{
		dec = (dec * 2) + str[i]-48;
	}
	return dec;
}

bool isBin(char* str, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (str[i] - 48 != 0 && str[i] - 48 != 1)
		{
			return false;
		}
	}
	return true;
}

int HexToDec(char* str, int n)
{
	int dec = 0;
	for (int i = 0; i < n; i++)
	{
		dec *= 16;
		if (str[i] >= '0'&&str[i] <= '9')dec += str[i] - '0';
		else if (str[i] >= 'A'&&str[i] <= 'F')dec += str[i] - 'A'+10;
		else if (str[i] >= 'a'&&str[i] <= 'f')dec += str[i] - 'a' + 10;
		else throw 0;
	}
	return dec;
}

bool isHex(char* str, int n)
{
	int i = 0;
	if (str[0] == '0' && (str[1] == 'x' || str[1] == 'X'))
	{
		for (i = 0; i < n - 2; i++)
		{
			str[i] = str[i + 2];
			str[n - 1] = 'S'; str[n - 2] = 'S';
		}
	}
	if (str[2] == 0) return false;
	for (i=0; i < n; i++)
	{
		if (
			!(str[i]>='0'&&str[i]<='9')&&
			!(str[i]>='a'&&str[i]<='f')&&
			!(str[i]>='A'&&str[i]<='F')
			)
		{
			return false;
		}
	}
	
	return true;
}