#include<iostream>
using namespace std;

#define BY_POINTER
//#define BY_REFERENCE


#ifdef BY_POINTER
template <typename T>
void swap(T* a, T* b);
#endif // BY_POITER

#ifdef BY_REFERENCE
void Exchange(int& a, int& b);
#endif

void main()
{
	int a = 7;
	int b = -10;
	cout << a << "\t" << b << endl;
	swap(&a, &b);
	cout << a << "\t" << b << endl;
}


#ifdef BY_POINTER
template<typename T>
void swap(T* a, T* b) 
{
	/*T* buffer = *a;
	*a = *b;
	*b = *buffer;*/
	*a = *b ^ *a;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
#endif // BY_POITER

#ifdef BY_REFERENCE
void Exchange(int& a, int& b)
{

}
#endif
