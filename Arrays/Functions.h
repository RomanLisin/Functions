#pragma once
//FunctionsSeparation
#include<iostream>
using namespace std;

#define delimetr "\n--------------------------------------------------------------\n"
#define tab "\t"

const int S = 4;

const int ROWS = 3;
const int COLS = 5;

void FillRand(int arr[], const int N, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int N, int minRand = 0, int maxRand = 100);
void FillRand(int arr[][S], const int M, const int N, int minRand = 50, int maxRand = 100);
void FillRand(char arr[][S], const int m, const int n, char minRand = 50, char maxRand = 100);
void FillRand(double arr[][S], const int M, const int N, int minRand = 50, int maxRand = 100);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);

template <typename T>
void Print(const T arr[], const int S);

template <typename T>
T Sum(const T arr[], const int S);

void Print(const char arr[], const int S);
//void Print(const double arr[], const int N);
void Print(int arr[][S], const int M, const int S);
void Print(char arr[][S], const int M, const int S);
void Print(double arr[][S], const int M, const int S);
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS);

int SumArr(const int arr[], const int N = 4);
char SumArr(const char arr[], const int N = 4);
double SumArr(const double arr[], const int N = 4);
int SumArr(int arr[][S], const int M, const int S);
char SumArr(const char arr[][S], const int M, const int S);
double SumArr(const double arr[][S], const int M, const int S);

double Avg(const int arr[], const int N = 4);
char Avg(const char arr[], const int N = 4);
double Avg(const double arr[], const int N = 4);
double Avg(int arr[][S], const int M, const int S);
char Avg(char[][S], const int M, const int S);
double Avg(double[][S], const int M, const int S);

int minValueIn(const int arr[], const int N = 4);
char minValueIn(const char arr[], const int N = 4);
double minValueIn(const double arr[], const int N = 4);
int minValueIn(int arr[][S], const int M, const int S);
char minValueIn(char arr[][S], const int M, const int S);
double minValueIn(double arr[][S], const int M, const int S);

int maxValueIn(const int arr[], const int N = 4);
char maxValueIn(const char arr[], const int N = 4);
double maxValueIn(const double arr[], const int N = 4);
int maxValueIn(int arr[][S], const int M, const int S);
char maxValueIn(char arr[][S], const int M, const int S);
double maxValueIn(double arr[][S], const int M, const int S);

void SortArr(int arr[], const int N = 4);
void SortArr(char arr[], const int N = 4);
void SortArr(double arr[], const int N = 4);
void SortArr(int arr[][S], const int M, const int S);
void SortArr(char[][S], const int M, const int S);
void SortArr(double[][S], const int M, const int S);

void ShiftLeft(int arr[], const int N = 4);
void ShiftLeft(char arr[], const int N = 4);
void ShiftLeft(double arr[], const int N = 4);
void ShiftLeft(int arr[][S], const int M, const int S);
void ShiftLeft(char arr[][S], const int M, const int S);
void ShiftLeft(double arr[][S], const int M, const int S);

void ShiftRight(int arr[], const int N = 4);
void ShiftRight(char arr[], const int N = 4);
void ShiftRight(double arr[], const int N = 4);
void ShiftRight(int arr[][S], const int M, const int S);
void ShiftRight(char arr[][S], const int M, const int S);
void ShiftRight(double arr[][S], const int M, const int S);
