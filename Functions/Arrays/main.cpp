#include"Functions.h"

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
	cout << "Сумма єлементов массива: " << Sum(Arr, n) << endl;
	cout << "Среднее арифметическое єлементов массива: " << Avg(Arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(Arr, n) << endl;
	DEV
	//	4
	int Crr[ROWS][COLS];
	FillRand(Crr, ROWS, COLS);
	Print(Crr, ROWS, COLS);
	cout << DELIMITER << endl;
	Sort(Crr, ROWS, COLS);
	Print(Crr, ROWS, COLS); cout << endl;
	cout << "Сумма массива: " << Sum(Crr, ROWS, COLS) << endl;;
	cout << "Среднее арифметическое элементов массива: " << Avg(Crr, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Crr, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(Crr, ROWS, COLS) << endl;
	DEV

}



template<typename T>void Print(T Arr[], const int n)
{
	// вывод массива на экран:
	for (int i = 0; i < n; i++)cout << Arr[i] << "\t";
	cout << endl;
}
template<typename T>	void Print(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";
		}cout << endl;
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
	cout << "Массив отсортирован за " << iterations << " итераций\n";
}
template<typename T>	void Sort(T Arr[ROWS][COLS], const int ROWS, const int COLS)
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
	cout << "Массив отсортирован за " << iterations << " итераций\n";
}

template<typename T>int Sum(T Arr[], const int n)//сумма єлемент.
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += Arr[i];
	}
	return sum;
}
template<typename T>	int Sum(T Arr[ROWS][COLS], const int ROWS, const int COLS)
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

template<typename T>	double Avg(T Arr[], const int n) //Среднее арифм.
{
	return (T)Sum(Arr, n) / n;
}
template<typename T>	double Avg(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(Arr, ROWS, COLS) / (ROWS * COLS);
}

template<typename T>	int minValueIn(T Arr[], const int n) //минимальное значение
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
template<typename T>	int minValueIn(T Arr[ROWS][COLS], const int ROWS, const int COLS)
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
	
template<typename T>	int maxValueIn(T Arr[], const int n)//максимальное значение 
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
template<typename T>	int maxValueIn(T Arr[ROWS][COLS], const int ROWS, const int COLS)
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