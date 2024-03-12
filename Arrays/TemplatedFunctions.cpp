#include"Functions.h"


template <typename T> void Print(const T arr[], const int N)
{
	//Вывод массива на экран:
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template <typename T> void Sum(const T arr[], const int S)
{
	T sum = T(); // локальная переменная типа Т ,  T()  значение по умолчанию для шаблонного типа данных эдентично T sum = 0
	for (int i = 0; i < S; i++)sum += arr[i];

	return sum;
}


