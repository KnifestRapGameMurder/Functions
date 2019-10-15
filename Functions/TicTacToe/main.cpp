#include<iostream>
#include<conio.h>
using namespace std;

#define HORIZ_OFFSET cout << "\t\t\t\t\t";
#define TITLE cout<<"\n\t\t\t\t���� ��������-������\n\n\t�������\t[R] - �������\n\t\t[Esc] - �����"<<endl;

void PrintField(char Field[], const int n);		//����� ���� �� �����
void Move(char Field[], const int n);			//���������� � ����
void Check(char Field[], const int n);			//�������� �����������

void main()
{
	setlocale(LC_ALL, "Rus");
	const int SIZE = 9+1;
	char Field[SIZE] = "";						//������� ����
	PrintField(Field, SIZE);
}

int counter = 0;								//������� ��� ������������� �������


void PrintField(char Field[], const int n)
{
	system("CLS");
	TITLE
	cout << "\n\n\n\n\n";
	for (int i = 6; i >= 0; i -= 3)
	{
		HORIZ_OFFSET
		for (int j = 0; j < 3; j++)
		{
			if (j == 0) cout << " ";
			cout << Field[j + i];
			if (j != 2) cout << " | ";
		}
		cout << endl; HORIZ_OFFSET
		if(i!=0) cout << "---+---+---"<< endl;
	}
	cout << "\n\n\n";
	counter++;					//����� ������
	Check(Field, n);			//����� ������� ������ ������������ ������� ���������� ����������
	
}

void Move(char Field[], const int n)
{
	char key;
	key = _getch();
	if (key == 27)return;		//��� ������� [Esc] ���� �������������
	if (key == 82 || key == 114 || key == 138 || key == 170)
	{
		for (int i = 0; i < n - 1; i++)	Field[i] = ' '; counter = 1;	//��� ������� [R] ��� [r] ��� ������ ������������ ���������
	}
	if (Field[key - 49] != 'X' && Field[key - 49] != '0')	 counter % 2 == 0 ? Field[key - 49] = '0' : Field[key - 49] = 'X';	//� ����������� �� �������� ����� � ������ ������������� 'X' ��� '0'
	else counter--;				//���� ����� ������ �� ������ ������, �� ����� ��� ��� ���� �� ������� ������ ������
	PrintField(Field, n);		//������� ���������� ������ � ������ ����������
}

void Check(char Field[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int c = 1; c < 5; c++)
		{

			if (Field[i] == 'X' && Field[i+1*c] == 'X' && Field[i+2*c] == 'X' && i != 4 && i != 5 && i != 7 && i != 8 && i+2*c != 3 && i+2*c != 4 && i+1*c != 2 && i+1*c != 6 && ((i+2*c)-i != 4 || i==2))	
			{		//�������� ������� ���������� ���������� ��� 'X' ������
				cout << "����� \"X\" �������\n��� ������� ���� �� NumPad'� ���� ������� �������������"; 
				counter = 1;	//���� ����������� � ������ 'X' ���� ������ ����� �� NumPad'e
				for (int i = 0; i < n - 1; i++)	Field[i] = ' '; 	//���������� ������ ���������
			}
			if (Field[i] == '0' && Field[i+1*c] == '0' && Field[i+2*c] == '0' && i != 4 && i != 5 && i != 7 && i != 8 && i+2*c != 3 && i+2*c != 4 && i+1*c != 2 && i+1*c != 6 && ((i+2*c)-i != 4 || i==2))
			{		//�������� ������� ���������� ���������� ��� '0' ������
				cout << "����� \"0\" �������\n��� ������� ���� �� NumPad'� ���� ������� �������������"; 
				counter = 1;	//���� ����������� � ������ 'X' ���� ������ ����� �� NumPad'e
				for (int i = 0; i < n - 1; i++)	Field[i] = ' ';	//���������� ������ ���������
			}
		}
	}
	Move(Field, n);				//����� ������ � �������� ���������� ������� ����� �� ���������� ������ � ����
}
