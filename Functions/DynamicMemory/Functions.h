#pragma once
#include<iostream>
using namespace std;

#define DYNAMIC_MEMORY_1 
//#define DYNAMIC_MEMORY_2 

//#define PUSH_ROW
//#define PUSH_COL

void fill(int arr[], int n);
void print(int arr[], int n);
int* push_back(int arr[], int& n, int value);
int* push_front(int arr[], int& n, int value);
int* insert(int arr[], int& n, int value);

int* pop_back(int arr[], int& n, int value);
int* pop_front(int arr[], int& n, int value);
int* erase(int arr[], int& n, int value);

int** push_row_back(int** arr, int& m, const int n);
int** push_row_front(int** arr, int& m, const int n);
int** insert_row(int** arr, int& m, const int n, int& index);

int** pop_row_back(int** arr, int& m, const int n);
int** pop_row_front(int** arr, int& m, const int n);
int** erase_row(int** arr, int& m, const int n, int& index);

int** push_col_back(int** arr, const int m, int& n);
int** push_col_front(int** arr, const int m, int& n);
int** insert_col(int** arr, const int m, int& n, int& index);

int** pop_col_back(int** arr, const int m, int& n);
int** pop_col_front(int** arr, const int m, int& n);
int** erase_col(int** arr, const int m, int& n, int& index);

int** allocate(const int m, const int n);
void clear(int** arr, const int m);

void FillRand(int** Arr, const int m, const int n);
void Print(int** Arr, const int m, const int n);

