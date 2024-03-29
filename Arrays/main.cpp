﻿//Arrays
#include<iostream>
using namespace std;

#define delimetr "\n--------------------------------------------------------------\n"
#define tab "\t"

const int S = 4;

const int ROWS = 3;
const int COLS = 5;

void FillRand(int arr[], const int N, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int N, int minRand = 0, int maxRand = 100);
void FillRand(int arr[][S], const int M , const int N, int minRand = 50, int maxRand = 100);
void FillRand(char arr[][S], const int m, const int n, char minRand = 50, char maxRand = 100);
void FillRand(double arr[][S], const int M, const int N, int minRand = 50, int maxRand = 100);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);

void Print(const int arr[], const int N);
void Print(const char arr[], const int N);
void Print(const double arr[], const int N);
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


void main()
{
	setlocale(LC_ALL, "");
	const int N = 4;
	const int M = 2;
	int arr[N], arrTwoDim[M][N];
	char arrCh[] = { "dvab" };
	double arrDoubl[N]; // = { 8.4,4.9,3.8,6.23 };
	char arrChTwoDim[][N] = { {'d','s','e','v'},{'k','o','p','l'} };
	double arrTwoDimDoub[M][N];// = { {3.2,2.2, 3.9,6.4}, {3.8, 2.3, 4.5, 7.94} };

	const int m = 8;
	double brr[m];
	
	int i_arr_2[ROWS][COLS];

	cout << delimetr;
	
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	FillRand(arr, N);
	cout << "\nИсходный массив:\n\n";
	Print(arr, N);
	FillRand(brr, m);
	cout << delimetr << endl;
	Print(brr, m);
	cout << delimetr << endl;
	cout << "\nСумма всех значений этих элементов составляет:\t" << SumArr(arr, N);
	cout << "\nСреднее-арифметическое всех этих чисел равно:\t" << Avg(arr, N);
	cout << "\nМинимальный элемент массива:\t" << minValueIn(arr, N);
	cout << "\nМаксимальный элемент массива:\t" << maxValueIn(arr, N);
	cout << "\nОтсортированный массив:\n\n";
	SortArr(arr, N);
	Print(arr, N);
	cout << "\nСдвиг элементов массива влево:\n\n";
	ShiftLeft(arr, N);
	Print(arr, N);
	cout << "\nСдвиг элементов массива вправо:\n\n";
	ShiftRight(arr, N);
	Print(arr, N);

	cout << "\nРабота функций с массивом типа char: ";
	cout << "\nИсходный массив:\n\n";

	Print(arrCh, N);

	cout << "\nСумма элементов типа char:\t" << SumArr(arrCh, N) << endl;
	cout << "Среднее-арифметическое элементов char:\t" << Avg(arrCh, N) << endl;
	cout << "Минимальный элемент массива:\t" << minValueIn(arrCh, N) << endl;
	cout << "Максимальный элемент массива:\t" << maxValueIn(arrCh, N) << endl;
	cout << "Отсортированный массив:\n\n";
	SortArr(arrCh, N);
	Print(arrCh, N);
	cout << endl << "Сдвиг элементов массива влево:\n\n";
	ShiftLeft(arrCh, N);
	Print(arrCh, N);
	cout << endl << "Сдвиг элемнтов массива вправо:\n\n";
	ShiftRight(arrCh, N);
	Print(arrCh, N);
	cout << endl << "Работа фунций с массивом типа double:\n";
	cout << "Исходный массив:\n\n";
	FillRand(arrDoubl, N);
	Print(arrDoubl, N);
	cout << endl << "Сумма элемнтов массива:\t" << SumArr(arrDoubl, N) << endl;
	cout << "Среднее-арифметическое всех элементов массива:\t" << Avg(arrDoubl, N) << endl;
	cout << "Минимальный элемент массива:\t" << minValueIn(arrDoubl, N) << endl;
	cout << "Максимальный элемент массива:\t" << maxValueIn(arrDoubl, N) << endl;
	cout << "Сортированный массив из вещественных чисел:\n\n";
	SortArr(arrDoubl, N);
	Print(arrDoubl, N);
	cout << endl << "Сдвиг элементов массива влево:\n\n";
	ShiftLeft(arrDoubl, N);
	Print(arrDoubl, N);
	cout << endl << "Сдвиг элементов массива вправо:\n\n";
	ShiftRight(arrDoubl, N);
	Print(arrDoubl, N);

	cout << "\nИсходный двумерный массив:\n\n";

	FillRand(arrTwoDim, M, N);
	Print(arrTwoDim, M, N);
	cout << endl << "Сумма элемнтов массива:\t" << SumArr(arrTwoDim, M, N) << endl;
	cout << "Среднее-арифметическое всех элементов массива:\t" << Avg(arrTwoDim, M, N) << endl;
	cout << "Минимальный элемент массива:\t" << minValueIn(arrTwoDim, M, N) << endl;
	cout << "Максимальный элемент массива:\t" << maxValueIn(arrTwoDim, M, N) << endl;
	cout << "Сортированный массив:\n\n"; SortArr(arrTwoDim, M, N); Print(arrTwoDim, M, N);
	cout << "\n\nСдвиг элементов массива влево:\n\n"; ShiftLeft(arrTwoDim, M, N); Print(arrTwoDim, M, N);
	cout << "\n\nСдвиг элементов массива вправо:\n\n"; ShiftRight(arrTwoDim, M, N); Print(arrTwoDim, M, N);

	cout <<"\n\nДвумерный массив типа char:\n\n";

	FillRand(arrChTwoDim, M, N);
	Print(arrChTwoDim, M, N);
	cout << endl << "Сумма элемнтов массива:\t" << SumArr(arrChTwoDim, M, N) << endl;
	cout << "Среднее-арифметическое всех элементов массива:\t" << Avg(arrChTwoDim, M, N) << endl;
	cout << "Минимальный элемент массива:\t" << minValueIn(arrChTwoDim, M, N) << endl;
	cout << "Максимальный элемент массива:\t" << maxValueIn(arrChTwoDim, M, N) << endl;
	cout << "Сортированный массив:\n\n"; SortArr(arrChTwoDim, M, N); Print(arrChTwoDim, M, N);
	cout << "\n\nСдвиг элементов массива  типа char влево:\n\n"; ShiftLeft(arrChTwoDim, M, N); Print(arrChTwoDim, M, N);
	cout << "\n\nСдвиг элементов массива типа char вправо:\n\n"; ShiftRight(arrChTwoDim, M, N); Print(arrChTwoDim, M, N);

	cout << "\nДвумерный массив типа double:\n\n";

	FillRand(arrTwoDimDoub, M, N);
	Print(arrTwoDimDoub, M, N);
	cout << endl << "Сумма элемнтов массива:\t" << SumArr(arrTwoDimDoub, M, N) << endl;
	cout << "Среднее-арифметическое всех элементов массива:\t" << Avg(arrTwoDimDoub, M, N) << endl;
	cout << "Минимальный элемент массива:\t" << minValueIn(arrTwoDimDoub, M, N) << endl;
	cout << "Максимальный элемент массива:\t" << maxValueIn(arrTwoDimDoub, M, N) << endl;
	cout << "Сортированный массив:\n\n"; SortArr(arrTwoDimDoub, M, N); Print(arrTwoDimDoub, M, N);
	cout << "\n\nСдвиг элементов массива  типа double влево:\n\n"; ShiftLeft(arrTwoDimDoub, M, N); Print(arrTwoDimDoub, M, N);
	cout << "\n\nСдвиг элементов массива типа double вправо:\n\n"; ShiftRight(arrTwoDimDoub, M, N); Print(arrTwoDimDoub, M, N);


	

}


void FillRand(int arr[], const int N, int minRand, int maxRand)
{
	//Заполнение массива случайными числами
	for (int i = 0; i < N; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand);
		//Функция rand() возвращает псевдослучайное число в диапазоне от 0 до 32 767 (RAND_MAX)
	}

}
void FillRand(double arr[], const int N, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	//Заполнение массива случайными числами типа double
	for (int i = 0; i < N; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand);
		//Функция rand() возвращает псевдослучайное число в диапазоне от 0 до 32 767 (RAND_MAX)
		arr[i] /= 100;
	}

}

void FillRand(int arr[][S],const int M, const int S, int minRand, int maxRand)
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < S; j++)
		{
			arr[i][j] = minRand + rand() % (maxRand - minRand);
		}
	}
}
void FillRand(char arr[][S], const int M, const int S, char minRand, char maxRand)
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < S; j++)
		{
			arr[i][j] = (char)(minRand + rand() % (maxRand - minRand));
		}
	}
}
void FillRand(double arr[][S], const int M, const int S, int minRand, int maxRand)
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < S; j++)
		{
			arr[i][j] = (double)(minRand + rand() % (maxRand - minRand))/4;
		}
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] =minRand + rand() % (maxRand-minRand);
		}
	}
}
void Print(const int arr[], const int N)
{
	//Вывод массива на экран:
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(const char arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(const double arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(int arr[][S], const int M, const int S)
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < S; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(char arr[][S], const int M, const int S)
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < S; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(double arr[][S], const int M, const int S)
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < S; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}
int SumArr(const int arr[], const int N)
{
	int Sum = 0;
	for (int i = 0; i < N; i++) {
		Sum += arr[i];
	}
	return Sum;
}
char SumArr(const char arr[], const int N)
{
	int Sum = 0;
	for (int i = 0; i < N; i++) {
		Sum += arr[i];
	}
	return Sum;
}
double SumArr(const double arr[], const int N)
{
	double Sum = 0;
	for (int i = 0; i < N; i++) {
		Sum += arr[i];
	}
	return Sum;
}
int SumArr(int arr[][S], const int M, const int S)
{	
	int Sum = 0;
	for(int i = 0; i < M; i++)
	{
		for (int j = 0; j < S; j++)
		{
			Sum += arr[i][j];
		}
	}

	return Sum;
}
char SumArr(const char arr[][S], const int M, const int S)
{
	char Sum = 0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < S; j++)
		{
			Sum += arr[i][j];
		}
	}

	return Sum;
}
double SumArr(const double arr[][S], const int M, const int S)
{
	double Sum = 0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < S; j++)
		{
			Sum += arr[i][j];
		}
	}

	return Sum;
}
double Avg(const int arr[], const int N)
{
	double Avg = 0;
	for (int i = 0; i < N; i++)
	{
		Avg = (double)SumArr(arr, N) / N;
	}
	return Avg;
}
char Avg(const char arr[], const int N)
{
	char Avg = 0;
	for (int i = 0; i < N; i++)
	{
		Avg = (char)(SumArr(arr, N) / N);
	}
	return Avg;
}
double Avg(const double arr[], const int N)
{
	double Avg = 0;
	for (int i = 0; i < N; i++)
	{
		Avg = (double)(SumArr(arr, N) / N);
	}
	return Avg;
}
double Avg(int arr[][S], const int M, const int S)
{
	double Avg = 0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < S; j++)
		{
			Avg = (double)(SumArr(arr, M, S) / (M * S));
		}
	}
	return Avg;
}
char Avg(char arr[][S], const int M, const int S)
{
	char Avg = 0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < S; j++)
		{
			Avg = (char)(SumArr(arr, M, S) / (M * S));
		}
	}
	return Avg;
}
double Avg(double arr[][S], const int M, const int S)
{
	double Avg = 0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < S; j++)
		{
			Avg = (double)(SumArr(arr, M, S) / (M * S));
		}
	}
	return Avg;
}
int minValueIn(const int arr[], const int N)
{
	int minValue = arr[0];
	for (int i = 1; i < N; i++) {
		if (arr[i] < minValue) {
			minValue = arr[i];
		}
	}
	return minValue;
}
char minValueIn(const char arr[], const int N)
{
	char minValue = arr[0];
	for (int i = 1; i < N; i++) {
		if (arr[i] < minValue) {
			minValue = arr[i];
		}
	}
	return minValue;
}
double minValueIn(const double arr[], const int N)
{
	double minValue = arr[0];
	for (int i = 1; i < N; i++) {
		if (arr[i] < minValue) {
			minValue = arr[i];
		}
	}
	return minValue;
}
int minValueIn(int arr[][S], const int M, const int S)
{
	int minValue = arr[0][0];
	for (int i = 0; i < M; i++)
	{
		for (int j = 1; j < S; j++)
		{
			if (arr[i][j] < minValue) {
				minValue = arr[i][j];
			}
		}
	}
	return minValue;
}
char minValueIn(char arr[][S], const int M, const int S)
{
	char minValue = arr[0][0];
	for (int i = 0; i < M; i++)
	{
		for (int j = 1; j < S; j++)
		{
			if (arr[i][j] < minValue) {
				minValue = arr[i][j];
			}
		}
	}
	return minValue;
}
double minValueIn(double arr[][S], const int M, const int S)
{
	double minValue = arr[0][0];
	for (int i = 0; i < M; i++)
	{
		for (int j = 1; j < S; j++)
		{
			if (arr[i][j] < minValue) {
				minValue = arr[i][j];
			}
		}
	}
	return minValue;
}
int maxValueIn(const int arr[], const int N)
{
	int maxValue = arr[0];
	for (int i = 1; i < N; i++) {
		if (arr[i] > maxValue) {
			maxValue = arr[i];
		}
	}
	return maxValue;
}
char maxValueIn(const char arr[], const int N)
{
	char maxValue = arr[0];
	for (int i = 1; i < N; i++) {
		if (arr[i] > maxValue) {
			maxValue = arr[i];
		}
	}
	return maxValue;
}
double maxValueIn(const double arr[], const int N)
{
	double maxValue = arr[0];
	for (int i = 1; i < N; i++) {
		if (arr[i] > maxValue) {
			maxValue = arr[i];
		}
	}
	return maxValue;
}
int maxValueIn(int arr[][S], const int M, const int S)
{
	int maxValue = 0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 1; j < S; j++)
		{
			if (arr[i][j] > maxValue) {
				maxValue = arr[i][j];
			}
		}
	}
	return maxValue;
}
char maxValueIn(char arr[][S], const int M, const int S)
{
	char maxValue = 0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 1; j < S; j++)
		{
			if (arr[i][j] > maxValue) {
				maxValue = arr[i][j];
			}
		}
	}
	return maxValue;
}
double maxValueIn(double arr[][S], const int M, const int S)
{
	double maxValue = 0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 1; j < S; j++)
		{
			if (arr[i][j] > maxValue) {
				maxValue = arr[i][j];
			}
		}
	}
	return maxValue;
}
void SortArr(int arr[], const int N)
{
	/*int temp = 0;*/
	for (int j = 1; j < N; j++) {
		for (int i = 0; i < N - j; i++) {
			if (arr[i] > arr[i + 1]) {
				arr[i] ^= arr[i + 1];
				arr[i + 1] = arr[i] ^ arr[i + 1];
				arr[i] ^= arr[i + 1];
				//temp = arr[i];              // работает с включенной переменной
				//arr[i] = arr[i + 1];
				//arr[i + 1] = temp;
			}
		}
	}
}
void SortArr(char arr[], const int N)
{
	for (int j = 1; j < N; j++) {
		for (int i = 0; i < N - j; i++) {
			if (arr[i] > arr[i + 1]) {
				arr[i] ^= arr[i + 1];              // если условие верно
				arr[i + 1] = arr[i] ^ arr[i + 1]; // меняем местами элементы
				arr[i] ^= arr[i + 1];
			}
		}
	}
}
void SortArr(double arr[], const int N)
{
	double temp = 0;         // заменить местами через XOR для double не представляется
	for (int j = 1; j < N; j++) {  //возможным, поэтому используем временную переменную
		for (int i = 0; i < N - j; i++) {
			if (arr[i] > arr[i + 1]) {
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
}
void SortArr(int arr[][S], const int M, const int S)
{

	for (int j = 0; j < S * M; j++)
	{
		for (int k = 0; k < M; k++)
		{
			for (int r = 0; r < S; r++) 
			{
				if (k + 1 == M && r + 1 == S) {   //условие проверяет, является ли текущий элемент последним в массивe, ограничивая выход за пределы массива
					//Если это так, то оператор continue передает управление на следующую итерацию внешнего цикла, пропуская выполнение оставшейся части тела цикла
					continue;  //используется для пропуска итерации цикла, когда текущий элемент является последним в массиве, что предотвращает выход за пределы массива
				}
				else if (r + 1 == S && arr[k][r] > arr[k + 1][0]) //проверяет, больше ли текущий элемент следующего элемента в следующей строке
				{
					int temp = arr[k][r];
					arr[k][r] = arr[k + 1][0]; 
					arr[k + 1][0] = temp;
				}
				else if (arr[k][r] > arr[k][r + 1])
				{
					int temp = arr[k][r];
					arr[k][r] = arr[k][r + 1];
					arr[k][r + 1] = temp;
				}
			}
		}
	}
}

void SortArr(char arr[][S], const int M, const int S) 
{
	for (int j = 0; j < S * M; j++)
	{
		for (int k = 0; k < M; k++)
		{
			for (int r = 0; r < S; r++)
			{
				if (k + 1 == M && r + 1 == S) {   //условие проверяет, является ли текущий элемент последним в массивe, ограничивая выход за пределы массива
					//Если это так, то оператор continue передает управление на следующую итерацию внешнего цикла, пропуская выполнение оставшейся части тела цикла
					continue;  //используется для пропуска итерации цикла, когда текущий элемент является последним в массиве, что предотвращает выход за пределы массива
				}
				else if (r + 1 == S && arr[k][r] > arr[k + 1][0]) //проверяет, больше ли текущий элемент следующего элемента в следующей строке
				{
					char temp = arr[k][r];
					arr[k][r] = arr[k + 1][0];
					arr[k + 1][0] = temp;
				}
				else if (arr[k][r] > arr[k][r + 1])
				{
					char temp = arr[k][r];
					arr[k][r] = arr[k][r + 1];
					arr[k][r + 1] = temp;
				}
			}
		}
	}
}
void SortArr(double arr[][S], const int M, const int S) 
{
	for (int j = 0; j < S * M; j++)
	{
		for (int k = 0; k < M; k++)
		{
			for (int r = 0; r < S; r++)
			{
				if (k + 1 == M && r + 1 == S) {   //условие проверяет, является ли текущий элемент последним в массивe, ограничивая выход за пределы массива
					//Если это так, то оператор continue передает управление на следующую итерацию внешнего цикла, пропуская выполнение оставшейся части тела цикла
					continue;  //используется для пропуска итерации цикла, когда текущий элемент является последним в массиве, что предотвращает выход за пределы массива
				}
				else if (r + 1 == S && arr[k][r] > arr[k + 1][0]) //проверяет, больше ли текущий элемент следующего элемента в следующей строке
				{
					double temp = arr[k][r];
					arr[k][r] = arr[k + 1][0];
					arr[k + 1][0] = temp;
				}
				else if (arr[k][r] > arr[k][r + 1])
				{
					double temp = arr[k][r];
					arr[k][r] = arr[k][r + 1];
					arr[k][r + 1] = temp;
				}
			}
		}
	}
}
void ShiftLeft(int arr[], const int N)
{
	for (int i = 0; i < N - 1; i++) {
		arr[i] ^= arr[i + 1];
		arr[i + 1] = arr[i] ^ arr[i + 1];
		arr[i] ^= arr[i + 1];
	}
}
void ShiftLeft(char arr[], const int N)
{
	for (int i = 0; i < N - 1; i++) {
		arr[i] ^= arr[i + 1];
		arr[i + 1] = arr[i] ^ arr[i + 1];
		arr[i] ^= arr[i + 1];
	}
}
void ShiftLeft(double arr[], const int N)
{
	double temp = arr[0];					// через временную переменную работает
	for (int i = 0; i < N - 1; i++) {
		/*arr[i] ^= arr[i + 1];                    // побитово не работает
		arr[i + 1] = arr[i] ^ arr[i + 1];
		arr[i] ^= arr[i + 1];*/
		arr[i] = arr[i + 1];
	}
	arr[N - 1] = temp;
}
void ShiftLeft(int arr[][S], const int M, const int S)
{
	const int SHIFT = 1;
	for (int j = 0; j < SHIFT; j++)
	{
		int temp = arr[0][0];
		for (int k = 0; k < M; k++)
		{
			for (int r = 0; r < S; r++)
			{
				if (k + 1 == M && r+1 == S)
				{
					arr[k][r] = temp;
					continue;
				}
				else if (r+1 == S)
				{
					arr[k][r] = arr[k][r + 1];
					arr[k][r + 1] = arr[k + 1][0];
				}
				else arr[k][r] = arr[k][r+1];
			}
		}
	}
}
void ShiftLeft(char arr[][S], const int M, const int S)
{
	const int SHIFT = 1;
	for (int j = 0; j < SHIFT; j++)
	{
		char temp = arr[0][0];
		for (int k = 0; k < M; k++)
		{
			for (int r = 0; r < S; r++)
			{
				if (k + 1 == M && r + 1 == S)
				{
					arr[k][r] = temp;
					continue;
				}
				else if (r + 1 == S)
				{
					arr[k][r] = arr[k][r + 1];
					arr[k][r + 1] = arr[k + 1][0];
				}
				else arr[k][r] = arr[k][r + 1];
			}
		}
	}
}
void ShiftLeft(double arr[][S], const int M, const int S)
{
	const int SHIFT = 1;
	for (int j = 0; j < SHIFT; j++)
	{
		double temp = arr[0][0];
		for (int k = 0; k < M; k++)
		{
			for (int r = 0; r < S; r++)
			{
				if (k + 1 == M && r + 1 == S)
				{
					arr[k][r] = temp;
					continue;
				}
				else if (r + 1 == S)
				{
					arr[k][r] = arr[k][r + 1];
					arr[k][r + 1] = arr[k + 1][0];
				}
				else arr[k][r] = arr[k][r + 1];
			}
		}
	}
}
void ShiftRight(int arr[], const int N)
{
	/*int temp = arr[N - 1];*/
	for (int i = N - 1; i > 0; i--) {
		arr[i] ^= arr[i - 1];
		arr[i - 1] = arr[i] ^ arr[i - 1];
		arr[i] ^= arr[i - 1];
	}
	/*for (int i = N - 1; i > 0; i--) {            // так тоже работает с включенной
		arr[i] = arr[i - 1];					   //  временной переменной
	}
	arr[0] = temp;*/
}
void ShiftRight(char arr[], const int N)
{
	for (int i = N - 1; i > 0; i--) {
		arr[i] ^= arr[i - 1];
		arr[i - 1] = arr[i] ^ arr[i - 1];
		arr[i] ^= arr[i - 1];
	}
}
void ShiftRight(double arr[], const int N)
{
	double temp = arr[N - 1];
	for (int i = N - 1; i > 0; i--) {
		arr[i] = arr[i - 1];
	}
	arr[0] = temp;
}
void ShiftRight(int arr[][S], const int M, const int S)
{
	const int SHIFT = 2;
	for (int j = 0; j < SHIFT; j++)
	{	
		int temp;
		for (int k = M-1; k >= 0; k--)
		{
			for (int r = S - 1; r >= 0; r--)
			{
				if (k + 1 == M && r + 1 == S)
				{
					temp = arr[k][r];
				}
				else if (r == 0) arr[k][r] = arr[k - 1][r + S - 1];
				arr[k][r] = arr[k][r - 1];
			}
		}
		arr[0][0] = temp;
	}
}
void ShiftRight(char arr[][S], const int M, const int S)
{
	const int SHIFT = 2;
	for (int j = 0; j < SHIFT; j++)
	{
		char temp;
		for (int k = M - 1; k >= 0; k--)
		{
			for (int r = S - 1; r >= 0; r--)
			{
				if (k + 1 == M && r + 1 == S)
				{
					temp = arr[k][r];
				}
				else if (r == 0) arr[k][r] = arr[k - 1][r + S - 1];
				arr[k][r] = arr[k][r - 1];
			}
		}
		arr[0][0] = temp;
	}
}
void ShiftRight(double arr[][S], const int M, const int S)
{
	const int SHIFT = 2;
	for (int j = 0; j < SHIFT; j++)
	{
		double temp;
		for (int k = M - 1; k >= 0; k--)
		{
			for (int r = S - 1; r >= 0; r--)
			{
				if (k + 1 == M && r + 1 == S)
				{
					temp = arr[k][r];
				}
				else if (r == 0) arr[k][r] = arr[k - 1][r + S - 1];
				arr[k][r] = arr[k][r - 1];
			}
		}
		arr[0][0] = temp;
	}
}