#include<iostream>
using namespace std;

int sum(int value ...)
{
	int sum = 0;
	int* p_value = &value;
	while (*p_value != 0)
	{
		sum += *p_value++;
	}
	return sum;
}

void main()
{
	cout << sum(3, 5, 8, 13, 21, 34, 0) << endl;
}