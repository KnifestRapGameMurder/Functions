#pragma once

#include<iostream>
using namespace std;
#define DELIMITER "\n------------------------------------------------------------------------\n"

const int ROWS = 4;// Количество строк двумерного массива
const int COLS = 5;// Количество элементов строки

void FillRand(int Arr[], const int n);
void FillRand(double Arr[], const int n);
void FillRand(float Arr[], const int n);
void FillRand(int Arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double Arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float Arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int Arr[], const int n);
void Print(double Arr[], const int n);
void Print(float Arr[], const int n);
void Print(int Arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double Arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(float Arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int Arr[], const int n);
void Sort(double Arr[], const int n);
void Sort(float Arr[], const int n);
void Sort(int Arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double Arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(float Arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int Arr[], const int n);
int Sum(double Arr[], const int n);
int Sum(float Arr[], const int n);
int Sum(int Arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum(double Arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum(float Arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int Arr[], const int n);
double Avg(double Arr[], const int n);
double Avg(float Arr[], const int n);
double Avg(int Arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double Arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(float Arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(int Arr[], const int n);
int minValueIn(double Arr[], const int n);
int minValueIn(float Arr[], const int n);
int minValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS);
int minValueIn(double Arr[ROWS][COLS], const int ROWS, const int COLS);
int minValueIn(float Arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(int Arr[], const int n);
int maxValueIn(double Arr[], const int n);
int maxValueIn(float Arr[], const int n);
int maxValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS);
int maxValueIn(double Arr[ROWS][COLS], const int ROWS, const int COLS);
int maxValueIn(float Arr[ROWS][COLS], const int ROWS, const int COLS);
/*
void ShiftLeft(int Arr[], const int n);
void ShiftRight(int Arr[], const int n);
*/

