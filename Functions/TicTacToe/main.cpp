#include<iostream>
#include<conio.h>
using namespace std;

#define HORIZ_OFFSET cout << "\t\t\t\t\t";
#define TITLE cout<<"\n\t\t\t\tИгра КРЕСТИКИ-НОЛИКИ\n\n\tНажмите\t[R] - рестарт\n\t\t[Esc] - выйти"<<endl;

void PrintField(char Field[], const int n);		//Вывод игры на экран
void Move(char Field[], const int n);			//Управление в игре
void Check(char Field[], const int n);			//Проверка результатов

void main()
{
	setlocale(LC_ALL, "Rus");
	const int SIZE = 9+1;
	char Field[SIZE] = "";						//Игровое поле
	PrintField(Field, SIZE);
}

int counter = 0;								//Счетчик для поочередности игроков


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
	counter++;					//Смена игрока
	Check(Field, n);			//После каждого вывода проверяеться наличие выиграшной комбинации
	
}

void Move(char Field[], const int n)
{
	char key;
	key = _getch();
	if (key == 27)return;		//При нажатие [Esc] игра прекращаеться
	if (key == 82 || key == 114 || key == 138 || key == 170)
	{
		for (int i = 0; i < n - 1; i++)	Field[i] = ' '; counter = 1;	//При нажатии [R] или [r] все клетки заполняються пробелами
	}
	if (Field[key - 49] != 'X' && Field[key - 49] != '0')	 counter % 2 == 0 ? Field[key - 49] = '0' : Field[key - 49] = 'X';	//В зависимости от счетчика ходов в клетку записываеться 'X' или '0'
	else counter--;				//Если игрок выбрал НЕ пустую клетку, он ходит ещё раз пока не выберет пустую клетку
	PrintField(Field, n);		//Функция выводиться заново с новыми значениями
}

void Check(char Field[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int c = 1; c < 5; c++)
		{

			if (Field[i] == 'X' && Field[i+1*c] == 'X' && Field[i+2*c] == 'X' && i != 4 && i != 5 && i != 7 && i != 8 && i+2*c != 3 && i+2*c != 4 && i+1*c != 2 && i+1*c != 6 && ((i+2*c)-i != 4 || i==2))	
			{		//Проверка наличия выиграшной комбинации для 'X' игрока
				cout << "Игрок \"X\" выиграл\nПри нажатии цифр на NumPad'е игра начнётся автоматически"; 
				counter = 1;	//Игра начинаеться с игрока 'X' если нажать цифры на NumPad'e
				for (int i = 0; i < n - 1; i++)	Field[i] = ' '; 	//Заполнение клеток пробелами
			}
			if (Field[i] == '0' && Field[i+1*c] == '0' && Field[i+2*c] == '0' && i != 4 && i != 5 && i != 7 && i != 8 && i+2*c != 3 && i+2*c != 4 && i+1*c != 2 && i+1*c != 6 && ((i+2*c)-i != 4 || i==2))
			{		//Проверка наличия выиграшной комбинации для '0' игрока
				cout << "Игрок \"0\" выиграл\nПри нажатии цифр на NumPad'е игра начнётся автоматически"; 
				counter = 1;	//Игра начинаеться с игрока 'X' если нажать цифры на NumPad'e
				for (int i = 0; i < n - 1; i++)	Field[i] = ' ';	//Заполнение клеток пробелами
			}
		}
	}
	Move(Field, n);				//После вывода и проверки ожидаеться нажатие одной из допустимых кнопок в игре
}
