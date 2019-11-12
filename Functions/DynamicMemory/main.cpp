#include"Functions.h"
#include"2DdynamicArr.cpp"
#include"1DdynamicArr.cpp"

typedef char DataType;

void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef DYNAMIC_MEMORY_2

	int m; //Количество строк
	int n; //Количество элементов строки
	cout << "Введите количество строк: "; cin >> m;
	cout << "Введите количество элементов строки: "; cin >> n;
	DataType** Arr = allocate<DataType>(m, n);
	//////////////////////////////////////////////////////////////////////
	//			Испоьзование двумерного динамического массива
	FillRand(Arr, m, n);
	Print(Arr, m, n);
#ifdef PUSH_ROW
	push_row_back(Arr, m, n);
	Print(Arr, m, n);
	Arr = push_row_front(Arr, m, n);
	Print(Arr, m, n);
	int index;
	do { cout << "Введите индекс добавляемой строки: "; cin >> index; } while (index >= m);
	Arr = insert_row(Arr, m, n, index);
	Print(Arr, m, n);
	cout << "____________________________________________________________________\n" << endl;
	Arr = pop_row_back(Arr, m, n);
	Print(Arr, m, n);
	Arr = pop_row_front(Arr, m, n);
	Print(Arr, m, n);
	do { cout << "Введите индекс отнимаемой строки: "; cin >> index; } while (index >= m);
	Arr = erase_row(Arr, m, n, index);
	Print(Arr, m, n);
#endif											// PUSH_ROW

#ifdef PUSH_COL
	Arr = push_col_back(Arr, m, n);
	Print(Arr, m, n);
	Arr = push_col_front(Arr, m, n);
	Print(Arr, m, n);
	T index;
	do { cout << "Введите индекс добавляемой колоны: "; cin >> index; } while (index >= n);
	insert_col(Arr, m, n, index);
	Print(Arr, m, n);
	cout << "____________________________________________________________________\n" << endl;
	Arr = pop_col_back(Arr, m, n);
	Print(Arr, m, n);
	Arr = pop_col_front(Arr, m, n);
	Print(Arr, m, n);
	do { cout << "Введите индекс отнимаемой колоны: "; cin >> index; } while (index >= n);
	Arr = erase_col(Arr, m, n, index);
	Print(Arr, m, n);
#endif											// PUSH_COL

	////////// D ////// E ////// L ////// E ////// T ////// E ////////////
	clear(Arr, m);
	////////////////////////////////////////////////////////////////////
#endif // DYNAMIC_MEMORY_2


#ifdef DYNAMIC_MEMORY_1
	int n;
	cout << "Введите размер массива: "; cin >> n;
	itn *arr = new T[n];
	fill(arr, n);
	print(arr, n);
	int value;
	cout << "Введите добавляемое значение: "; cin >> value;
	arr = push_back(arr, n,value);
	print(arr, n);
	arr = push_front(arr, n, value);
	print(arr, n);
	arr = insert(arr, n,value);
	print(arr, n);
	arr = pop_back(arr, n, value);
	print(arr, n);
	delete[] arr;
#endif
}
