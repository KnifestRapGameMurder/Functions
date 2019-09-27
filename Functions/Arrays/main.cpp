#include<iostream>
using namespace std;
#define DELIMITER	"\n. | . | . | . | . | . | . | . | .	SORT\n"
#define DEV			cout<<"____________________________________________________\n\n";

const int ROWS = 4;// ���������� ����� ���������� �������
const int COLS = 5;// ���������� ��������� ������

template<typename T>	void FillRand(T Arr[], const int n);
template<typename T>	void FillRand(T Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>	void Print(T Arr[], const int n);
void Print(double Arr[], const int n);
void Print(float Arr[], const int n);
void Print(int Arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double Arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(float Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>	void Sort(T Arr[], const int n);
void Sort(double Arr[], const int n);
void Sort(float Arr[], const int n);
void Sort(int Arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double Arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(float Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>	int Sum(T Arr[], const int n);
int Sum(double Arr[], const int n);
int Sum(float Arr[], const int n);
int Sum(int Arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum(double Arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum(float Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>	double Avg(T Arr[], const int n);
double Avg(double Arr[], const int n);
double Avg(float Arr[], const int n);
double Avg(int Arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double Arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(float Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>int minValueIn(T Arr[], const int n);
int minValueIn(double Arr[], const int n);
int minValueIn(float Arr[], const int n);
int minValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS);
int minValueIn(double Arr[ROWS][COLS], const int ROWS, const int COLS);
int minValueIn(float Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>int maxValueIn(T Arr[], const int n);
int maxValueIn(double Arr[], const int n);
int maxValueIn(float Arr[], const int n);
int maxValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS);
int maxValueIn(double Arr[ROWS][COLS], const int ROWS, const int COLS);
int maxValueIn(float Arr[ROWS][COLS], const int ROWS, const int COLS);
/*
void ShiftLeft(int Arr[], const int n);
void ShiftRight(int Arr[], const int n);
*/

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	DEV
	//	1
	int Arr[n];
	FillRand(Arr, n);
	Print(Arr, n);
	cout << DELIMITER << endl;
	Sort(Arr, n);
	Print(Arr, n); cout << endl;
	cout << "����� ��������� �������: " << Sum(Arr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(Arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(Arr, n) << endl;
	DEV
	//	2
	double Brr[n];
	FillRand(Brr, n);
	Print(Brr, n);
	cout << DELIMITER << endl;
	Sort(Brr, n);
	Print(Brr, n); cout << endl;
	cout << "����� ��������� �������: " << Sum(Brr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(Brr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Brr, n) << endl;
	DEV
	//	3
	float Drr[n];
	FillRand(Drr, n);
	Print(Drr, n);
	cout << DELIMITER << endl;
	Sort(Drr, n);
	Print(Drr, n); cout << endl;
	cout << "����� ��������� �������: " << Sum(Drr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(Drr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Drr, n) << endl;
	DEV
	//	4
	int Crr[ROWS][COLS];
	FillRand(Crr, ROWS, COLS);
	Print(Crr, ROWS, COLS);
	cout << DELIMITER << endl;
	Sort(Crr, ROWS, COLS);
	Print(Crr, ROWS, COLS); cout << endl;
	cout << "����� �������: " << Sum(Crr, ROWS, COLS) << endl;;
	cout << "������� �������������� ��������� �������: " << Avg(Crr, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Crr, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(Crr, ROWS, COLS) << endl;
	DEV
	//	5
	double Err[ROWS][COLS];
	FillRand(Err, ROWS, COLS);
	Print(Err, ROWS, COLS);
	cout << DELIMITER << endl;
	Sort(Err, ROWS, COLS);
	Print(Err, ROWS, COLS); cout << endl;
	cout << "����� �������: " << Sum(Err, ROWS, COLS) << endl;;
	cout << "������� �������������� ��������� �������: " << Avg(Err, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Err, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(Err, ROWS, COLS) << endl;
	DEV
	//	6
	float Frr[ROWS][COLS];
	FillRand(Frr, ROWS, COLS);
	Print(Frr, ROWS, COLS);
	cout << DELIMITER << endl;
	Sort(Frr, ROWS, COLS);
	Print(Frr, ROWS, COLS); cout << endl;
	cout << "����� �������: " << Sum(Frr, ROWS, COLS) << endl;;
	cout << "������� �������������� ��������� �������: " << Avg(Frr, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Frr, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(Frr, ROWS, COLS) << endl;
	DEV

}

template<typename T>void FillRand(T Arr[], const int n)
{
	//���������� ���������� �������:
	for (int i = 0; i < n; i++)Arr[i] = rand() % 100;
}
void FillRand(double Arr[], const int n)
{
	//���������� ���������� �������:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 10000;
		Arr[i] /= 100;
	}
}
void FillRand(float Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 10000;
		Arr[i] /= 100;
	}
}
template<typename T>	void FillRand(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 10000;
			Arr[i][j] /= 100;
		}
	}
}
void FillRand(float Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 100;
		}
	}
}

template<typename T>void Print(T Arr[], const int n)
{
	// ����� ������� �� �����:
	for (int i = 0; i < n; i++)cout << Arr[i] << "\t";
	cout << endl;
}
void Print(double Arr[], const int n)
{
	// ����� ������� �� �����:
	for (int i = 0; i < n; i++)cout << Arr[i] << "\t";
	cout << endl;
}
void Print(float Arr[], const int n)
{
	for (int i = 0; i < n; i++)cout << Arr[i] << "\t";
	cout << endl;
}
void Print(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";

		}
		cout << endl;
	}
}
void Print(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";

		}
		cout << endl;
	}
}
void Print(float Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";

		}
		cout << endl;
	}
}

template<typename T>void Sort(T Arr[], const int n)
{
	int iterations = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				T buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
			iterations++;
		}
	}
	cout << "������ ������������ �� " << iterations << " ��������\n";
}
void Sort(double Arr[], const int n)
{
	int iterations = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				double buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
			iterations++;
		}
	}
	cout << "������ ������������ �� " << iterations << " ��������\n";
}
void Sort(float Arr[], const int n)
{
	int iterations = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				float buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
			iterations++;
		}
	}
	cout << "������ ������������ �� " << iterations << " ��������\n";
}
void Sort(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				int l;
				for (int l = (k == i) ? j + 1 : 0; l < COLS; l++)
				{
					if (Arr[k][l] < Arr[i][j])
					{
						int buffer = Arr[i][j];
						Arr[i][j] = Arr[k][l];
						Arr[k][l] = buffer;
					}
					iterations++;
				}
			}
		}
	}
	cout << "������ ������������ �� " << iterations << " ��������\n";
}
void Sort(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				int l;
				for (int l = (k == i) ? j + 1 : 0; l < COLS; l++)
				{
					if (Arr[k][l] < Arr[i][j])
					{
						double buffer = Arr[i][j];
						Arr[i][j] = Arr[k][l];
						Arr[k][l] = buffer;
					}
					iterations++;
				}
			}
		}
	}
	cout << "������ ������������ �� " << iterations << " ��������\n";
}
void Sort(float Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				int l;
				for (int l = (k == i) ? j + 1 : 0; l < COLS; l++)
				{
					if (Arr[k][l] < Arr[i][j])
					{
						int buffer = Arr[i][j];
						Arr[i][j] = Arr[k][l];
						Arr[k][l] = buffer;
					}
					iterations++;
				}
			}
		}
	}
	cout << "������ ������������ �� " << iterations << " ��������\n";
}

template<typename T>int Sum(T Arr[], const int n)//����� �������.
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += Arr[i];
	}
	return sum;
}
int Sum(double Arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += Arr[i];
	}
	return sum;
}
int Sum(float Arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += Arr[i];
	}
	return sum;
}
int Sum(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += Arr[i][j];
		}
	}
	return sum;
}
int Sum(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += Arr[i][j];
		}
	}
	return sum;
}
int Sum(float Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += Arr[i][j];
		}
	}
	return sum;
}

template<typename T>double Avg(T Arr[], const int n) //������� �����.
{
	/* double total = Sum(Arr, n);
	 double avg = total / n;
	 return avg;*/
	return (double)Sum(Arr, n) / n;
}
double Avg(double Arr[], const int n)
{
	return (double)Sum(Arr, n) / n;
}
double Avg(float Arr[], const int n)
{
	return (double)Sum(Arr, n) / n;
}
double Avg(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(Arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(Arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(float Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(Arr, ROWS, COLS) / (ROWS * COLS);
}

template<typename T>int minValueIn(T Arr[], const int n) //����������� ��������
{
	int min = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] < min)
		{
			min = Arr[i];
		}
	}
	return min;
}
int minValueIn(double Arr[], const int n)
{
	double min = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] < min)
		{
			min = Arr[i];
		}
	}
	return min;
}
int minValueIn(float Arr[], const int n)
{
	int min = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] < min)
		{
			min = Arr[i];
		}
	}
	return min;
}
int minValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < min)
			{
				min = Arr[i][j];
			}
		}
	}
	return min;
}
int minValueIn(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < min)
			{
				min = Arr[i][j];
			}
		}
	}
	return min;
}
int minValueIn(float Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < min)
			{
				min = Arr[i][j];
			}
		}
	}
	return min;
}

template<typename T>int maxValueIn(T Arr[], const int n)//������������ �������� 
{
	int max = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] > max)
		{
			max = Arr[i];
		}
	}
	return max;
}
int maxValueIn(double Arr[], const int n)
{
	int max = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] > max)
		{
			max = Arr[i];
		}
	}
	return max;
}
int maxValueIn(float Arr[], const int n)
{
	int max = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] > max)
		{
			max = Arr[i];
		}
	}
	return max;
}
int maxValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] > max)
			{
				max = Arr[i][j];
			}
		}
	}
	return max;
}
int maxValueIn(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] > max)
			{
				max = Arr[i][j];
			}
		}
	}
	return max;
}
int maxValueIn(float Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] > max)
			{
				max = Arr[i][j];
			}
		}
	}
	return max;
}
