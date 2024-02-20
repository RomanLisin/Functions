//Functions
#include<iostream>
using namespace std;

//Default arguments

int Sum(int a, int b);
int Diff(int a, int b);
int Prod(int a, int b);
double Quot(int a, int b);


double Power(double a, int n);



void main() {

	setlocale(LC_ALL, "");

	int a, b;
	cout << "Введите два числа через пробел: "; cin >> a >> b;
	
	int c = Sum(a, b);
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Diff(a, b) << endl;
	cout << a << " * " << b << " = " << Prod(a, b) << endl;
	cout << a << " / " << b << " = " << Quot(a, b) << endl;

	cout << "Число " << a << " в степени " << b << " = " << Power(a, b) << endl;
	cout << endl << endl;

	

}

int Sum(int a, int b)
{
	int c = a + b;
	return c;
}

int Diff(int a, int b)
{
	//Difference - разность
	return a - b;
}

int Prod(int a, int b)
{
	//Product - произведение
	return a * b;
}

double Quot(int a, int b)
{
	//Quotient - частное
	return (double)a / b;
}

double Power(double a, int n)  // a - основание, n - показатель степени, Power возводит число a в степень n
{
	double N = 1;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	return N;
}
