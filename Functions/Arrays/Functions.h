#pragma once

#include<iostream>
using namespace std;
#define DELIMITER	"\n. | . | . | . | . | . | . | . | .	SORT\n"
#define DEV			cout<<"____________________________________________________\n\n";

const int ROWS = 4;// Количество строк двумерного массива
const int COLS = 5;// Количество элементов строки

template<typename T>	void FillRand(T Arr[], const int n);
template<typename T>	void FillRand(double Arr[], const int n);
template<typename T>	void FillRand(T Arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>	void FillRand(double Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>	void Print(T Arr[], const int n);
template<typename T>	void Print(T Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>	void Sort(T Arr[], const int n);
template<typename T>	void Sort(T Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>	int Sum(T Arr[], const int n);
template<typename T>	int Sum(T Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>	double Avg(T Arr[], const int n);
template<typename T>	double Avg(T Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>	int minValueIn(T Arr[], const int n);
template<typename T>	int minValueIn(T Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>	int maxValueIn(T Arr[], const int n);
template<typename T>	int maxValueIn(T Arr[ROWS][COLS], const int ROWS, const int COLS);
/*
void ShiftLeft(int Arr[], const int n);
void ShiftRight(int Arr[], const int n);
*/
