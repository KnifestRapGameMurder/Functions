#include<iostream>
using namespace std;

void print(int arr[], int n);
int* push_back(int arr[], int& n,int value);
int* push_front(int arr[], int& n,int value);
int* insert(int arr[], int& n,int value);
void main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	cout << "������� ������ �������: "; cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++) cout << (arr[i] = rand()%100) << "\t"; cout << endl;
	int value;
	cout << "������� ����������� ��������: "; cin >> value;
	arr = insert(arr, n,value);
	print(arr, n);
	delete[] arr;
}

void print(int arr[], int n)
{
	for (int i = 0; i < n; i++) cout << arr[i] << "\t"; cout << endl;
}
int* push_back(int arr[],int& n,int value)
{
	//���������� �������� � ����� �������
	
	
	//1)������� ��������� ������ �������� �� 1 ������� ������
	int* buffer = new int[n + 1]{};
	//2)�������� ���������� ��������� ������� � �����
	for (int i = 0; i < n; i++) buffer[i] = arr[i];
	//3)������� �������� ������ �� ������
	delete[] arr;
	arr = buffer;
	arr[n] = value;
	n++; 
	return arr;
	
}
int* push_front(int arr[], int& n,int value)
{
	//���������� �������� � ����� �������
	

	//1)������� ��������� ������ �������� �� 1 ������� ������
	int* buffer = new int[n + 1]{};
	//2)�������� ���������� ��������� ������� � �����
	for (int i = 0; i < n; i++) buffer[i+1] = arr[i];
	//3)������� �������� ������ �� ������
	delete[] arr;
	arr = buffer;
	arr[0] = value;
	n++;
	return arr;
}
int* insert(int arr[], int& n,int value)
{
	//���������� �������� � ����� �������
	int index;
	cout << "������� ������: "; cin >> index;
	//1)������� ��������� ������ �������� �� 1 ������� ������
	int* buffer = new int[n + 1]{};
	//2)�������� ���������� ��������� ������� � �����
	for (int i = 0; i < n; i++) i < index  ? buffer[i] = arr[i] : buffer[i+1] = arr[i];
	//3)������� �������� ������ �� ������
	delete[] arr;
	arr = buffer;
	arr[index] = value;
	n++;
	return arr;
}