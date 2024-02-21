//Arrays
#include<iostream>
using namespace std;

void FillRand(int arr[], const int n, int minRand=0, int maxRand=100);

void Print(const int arr[], const int n);
void Print(const char arr[], const int n);
void Print(const double arr[], const int n);


int SumArr(const int arr[], const int N = 4);
char SumArr(const char arr[], const int N = 4);
double SumArr(const double arr[], const int N = 4);

double Avg(const int arr[], const int N = 4);
char Avg(const char arr[], const int N = 4);
double Avg(const double arr[], const int N = 4);

int minValueIn(const int arr[], const int N = 4);
char minValueIn(const char arr[], const int N = 4);
double minValueIn(const double arr[], const int N = 4);

int maxValueIn(const int arr[], const int N = 4);
char maxValueIn(const char arr[], const int N = 4);
double maxValueIn(const double arr[], const int N = 4);

void SortArr(int arr[], const int N = 4);
void SortArr(char arr[], const int N = 4);
void SortArr(double arr[], const int N = 4);

void ShiftLeft(int arr[], const int N = 4);
void ShiftLeft(char arr[], const int N = 4);
void ShiftLeft(double arr[], const int N = 4);

void ShiftRight(int arr[], const int N = 4);
void ShiftRight(char arr[], const int N = 4);
void ShiftRight(double arr[], const int N = 4);


void main()
{
	setlocale(LC_ALL, "");
	const int n = 4;
	const int m = 2;
	int arr[n], arrTwoDim[n][m];
	char arrCh[] = { "dvab"};
	double arrDoubl[] = { 8.4,4.9,3.8,6.23 };
	

	FillRand(arr, n);
	cout << "Исходный массив:\n\n";
	Print(arr, n);
	cout << "\nСумма всех значений этих элементов составляет:\t" << SumArr(arr, n);
	cout << "\nСреднее-арифметическое всех этих чисел равно:\t" << Avg(arr, n);
	cout << "\nМинимальный элемент массива:\t" << minValueIn(arr, n);
	cout << "\nМаксимальный элемент массива:\t" << maxValueIn(arr, n);
	cout << "\nОтсортированный массив:\n\n";
	SortArr(arr, n);
	Print(arr, n);
	cout << "\nСдвиг элементов массива влево:\n\n";
	ShiftLeft(arr, n);
	Print(arr, n);
	cout << "\nСдвиг элементов массива вправо:\n\n";
	ShiftRight(arr, n);
	Print(arr, n);

	cout << "\nРабота функций с массивом типа char: ";
	cout << "\nИсходный массив:\n\n";

	Print(arrCh, n);

	cout << "\nСумма элементов типа char:\t" << SumArr(arrCh, n) << endl;
	cout  << "Среднее-арифметическое элементов char:\t" << Avg(arrCh, n) << endl;
	cout << "Минимальный элемент массива:\t" << minValueIn(arrCh, n) << endl;
	cout << "Максимальный элемент массива:\t" << maxValueIn(arrCh, n) << endl;
	cout << "Отсортированный массив:\n\n";
	SortArr(arrCh, n);
	Print(arrCh, n);
	cout << endl<< "Сдвиг элементов массива влево:\n\n";
	ShiftLeft(arrCh, n);
	Print(arrCh, n);
	cout <<endl<< "Сдвиг элемнтов массива вправо:\n\n";
	ShiftRight(arrCh, n);
	Print(arrCh, n);
	cout << endl<< "Работа фунций с массивом типа double:\n";
	cout << "Исходный массив:\n\n";
	Print(arrDoubl, n);
	cout << endl << "Сумма элемнтов массива:\t" << SumArr(arrDoubl, n) << endl;
	cout << "Среднее-арифметическое всех элементов массива:\t" << Avg(arrDoubl, n) << endl;
	cout << "Минимальный элемент массива:\t" << minValueIn(arrDoubl, n) << endl;
	cout << "Максимальный элемент массива:\t" << maxValueIn(arrDoubl, n) << endl;
	cout << "Сортированный массив из вещественных чисел:\n\n";
	SortArr(arrDoubl, n);
	Print(arrDoubl, n);
	cout << endl << "Сдвиг элементов массива влево:\n\n";
	ShiftLeft(arrDoubl, n);
	Print(arrDoubl, n);
	cout << endl << "Сдвиг элементов массива вправо:\n\n";
	ShiftRight(arrDoubl, n);
	Print(arrDoubl, n);
	
}


void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	//Заполнение массива случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand-minRand);
		//Функция rand() возвращает псевдослучайное число в диапазоне от 0 до 32 767 (RAND_MAX)
	}

}

void Print(const int arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(const char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<< "\t";
	}
	cout << endl;
}
void Print(const double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<<"\t";
	}
	cout << endl;
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
	int temp = arr[N - 1];
	for (int i = N - 1; i > 0; i--) {
		arr[i] = arr[i - 1];
	}
	arr[0] = temp;
}