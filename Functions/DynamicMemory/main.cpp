#include"Functions.h"
#include"2DdynamicArr.cpp"
#include"1DdynamicArr.cpp"

typedef char DataType;

void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef DYNAMIC_MEMORY_2

	int m; //���������� �����
	int n; //���������� ��������� ������
	cout << "������� ���������� �����: "; cin >> m;
	cout << "������� ���������� ��������� ������: "; cin >> n;
	DataType** Arr = allocate<DataType>(m, n);
	//////////////////////////////////////////////////////////////////////
	//			������������ ���������� ������������� �������
	FillRand(Arr, m, n);
	Print(Arr, m, n);
#ifdef PUSH_ROW
	push_row_back(Arr, m, n);
	Print(Arr, m, n);
	Arr = push_row_front(Arr, m, n);
	Print(Arr, m, n);
	int index;
	do { cout << "������� ������ ����������� ������: "; cin >> index; } while (index >= m);
	Arr = insert_row(Arr, m, n, index);
	Print(Arr, m, n);
	cout << "____________________________________________________________________\n" << endl;
	Arr = pop_row_back(Arr, m, n);
	Print(Arr, m, n);
	Arr = pop_row_front(Arr, m, n);
	Print(Arr, m, n);
	do { cout << "������� ������ ���������� ������: "; cin >> index; } while (index >= m);
	Arr = erase_row(Arr, m, n, index);
	Print(Arr, m, n);
#endif											// PUSH_ROW

#ifdef PUSH_COL
	Arr = push_col_back(Arr, m, n);
	Print(Arr, m, n);
	Arr = push_col_front(Arr, m, n);
	Print(Arr, m, n);
	T index;
	do { cout << "������� ������ ����������� ������: "; cin >> index; } while (index >= n);
	insert_col(Arr, m, n, index);
	Print(Arr, m, n);
	cout << "____________________________________________________________________\n" << endl;
	Arr = pop_col_back(Arr, m, n);
	Print(Arr, m, n);
	Arr = pop_col_front(Arr, m, n);
	Print(Arr, m, n);
	do { cout << "������� ������ ���������� ������: "; cin >> index; } while (index >= n);
	Arr = erase_col(Arr, m, n, index);
	Print(Arr, m, n);
#endif											// PUSH_COL

	////////// D ////// E ////// L ////// E ////// T ////// E ////////////
	clear(Arr, m);
	////////////////////////////////////////////////////////////////////
#endif // DYNAMIC_MEMORY_2


#ifdef DYNAMIC_MEMORY_1
	int n;
	cout << "������� ������ �������: "; cin >> n;
	itn *arr = new T[n];
	fill(arr, n);
	print(arr, n);
	int value;
	cout << "������� ����������� ��������: "; cin >> value;
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
