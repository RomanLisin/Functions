#include"Functions.h"


template <typename T> void Print(const T arr[], const int N)
{
	//����� ������� �� �����:
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template <typename T> void Sum(const T arr[], const int S)
{
	T sum = T(); // ��������� ���������� ���� � ,  T()  �������� �� ��������� ��� ���������� ���� ������ ��������� T sum = 0
	for (int i = 0; i < S; i++)sum += arr[i];

	return sum;
}


