#include"Functions.h"
#include"TemplatedFunctions.cpp"

void main()
{
	setlocale(LC_ALL, "");
	const int i_SIZE = 4;
	const int M = 2;
	int i_arr[i_SIZE], arrTwoDim[M][i_SIZE];
	char arrCh[] = { "dvab" };
	double arrDoubl[i_SIZE]; // = { 8.4,4.9,3.8,6.23 };
	char arrChTwoDim[][i_SIZE] = { {'d','s','e','v'},{'k','o','p','l'} };
	double arrTwoDimDoub[M][i_SIZE];// = { {3.2,2.2, 3.9,6.4}, {3.8, 2.3, 4.5, 7.94} };

	const int d_SIZE = 8;
	double d_arr[d_SIZE];
	
	int i_arr_2[ROWS][COLS];
	
	cout << delimetr;
	
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	FillRand(i_arr, i_SIZE);
	cout << "\nИсходный массив:\n\n";
	Print(i_arr, i_SIZE);
	cout << "\nСумма этих элемнетов массива равна: " << Sum(i_arr, i_SIZE)<< endl;
	FillRand(d_arr, d_SIZE);
	cout << delimetr << endl;
	Print(d_arr, d_SIZE);
	cout << "\nСумма элементов массива вещественных чисел равна: " << Sum(d_arr, d_SIZE)<<endl;
	cout << delimetr << endl;
	cout << "\nСумма всех значений элементов исходного массива составляет:\t" << SumArr(i_arr, i_SIZE);
	cout << "\nСреднее-арифметическое всех этих чисел равно:\t" << Avg(i_arr, i_SIZE);
	cout << "\nМинимальный элемент массива:\t" << minValueIn(i_arr, i_SIZE);
	cout << "\nМаксимальный элемент массива:\t" << maxValueIn(i_arr, i_SIZE);
	cout << "\nОтсортированный массив:\n\n";
	SortArr(i_arr, i_SIZE);
	Print(i_arr, i_SIZE);
	cout << "\nСдвиг элементов массива влево:\n\n";
	ShiftLeft(i_arr, i_SIZE);
	Print(i_arr, i_SIZE);
	cout << "\nСдвиг элементов массива вправо:\n\n";
	ShiftRight(i_arr, i_SIZE);
	Print(i_arr, i_SIZE);

	cout << "\nРабота функций с массивом типа char: ";
	cout << "\nИсходный массив:\n\n";

	Print(arrCh, i_SIZE);

	cout << "\nСумма элементов типа char:\t" << SumArr(arrCh, i_SIZE) << endl;
	cout << "Среднее-арифметическое элементов char:\t" << Avg(arrCh, i_SIZE) << endl;
	cout << "Минимальный элемент массива:\t" << minValueIn(arrCh, i_SIZE) << endl;
	cout << "Максимальный элемент массива:\t" << maxValueIn(arrCh, i_SIZE) << endl;
	cout << "Отсортированный массив:\n\n";
	SortArr(arrCh, i_SIZE);
	Print(arrCh, i_SIZE);
	cout << endl << "Сдвиг элементов массива влево:\n\n";
	ShiftLeft(arrCh, i_SIZE);
	Print(arrCh, i_SIZE);
	cout << endl << "Сдвиг элемнтов массива вправо:\n\n";
	ShiftRight(arrCh, i_SIZE);
	Print(arrCh, i_SIZE);
	cout << endl << "Работа фунций с массивом типа double:\n";
	cout << "Исходный массив:\n\n";
	FillRand(arrDoubl, i_SIZE);
	Print(arrDoubl, i_SIZE);
	cout << endl << "Сумма элемнтов массива:\t" << SumArr(arrDoubl, i_SIZE) << endl;
	cout << "Среднее-арифметическое всех элементов массива:\t" << Avg(arrDoubl, i_SIZE) << endl;
	cout << "Минимальный элемент массива:\t" << minValueIn(arrDoubl, i_SIZE) << endl;
	cout << "Максимальный элемент массива:\t" << maxValueIn(arrDoubl, i_SIZE) << endl;
	cout << "Сортированный массив из вещественных чисел:\n\n";
	SortArr(arrDoubl, i_SIZE);
	Print(arrDoubl, i_SIZE);
	cout << endl << "Сдвиг элементов массива влево:\n\n";
	ShiftLeft(arrDoubl, i_SIZE);
	Print(arrDoubl, i_SIZE);
	cout << endl << "Сдвиг элементов массива вправо:\n\n";
	ShiftRight(arrDoubl, i_SIZE);
	Print(arrDoubl, i_SIZE);

	cout << "\nИсходный двумерный массив:\n\n";

	FillRand(arrTwoDim, M, i_SIZE);
	Print(arrTwoDim, M, i_SIZE);
	cout << endl << "Сумма элемнтов массива:\t" << SumArr(arrTwoDim, M, i_SIZE) << endl;
	cout << "Среднее-арифметическое всех элементов массива:\t" << Avg(arrTwoDim, M, i_SIZE) << endl;
	cout << "Минимальный элемент массива:\t" << minValueIn(arrTwoDim, M, i_SIZE) << endl;
	cout << "Максимальный элемент массива:\t" << maxValueIn(arrTwoDim, M, i_SIZE) << endl;
	cout << "Сортированный массив:\n\n"; SortArr(arrTwoDim, M, i_SIZE); Print(arrTwoDim, M, i_SIZE);
	cout << "\n\nСдвиг элементов массива влево:\n\n"; ShiftLeft(arrTwoDim, M, i_SIZE); Print(arrTwoDim, M, i_SIZE);
	cout << "\n\nСдвиг элементов массива вправо:\n\n"; ShiftRight(arrTwoDim, M, i_SIZE); Print(arrTwoDim, M, i_SIZE);

	cout <<"\n\nДвумерный массив типа char:\n\n";

	FillRand(arrChTwoDim, M, i_SIZE);
	Print(arrChTwoDim, M, i_SIZE);
	cout << endl << "Сумма элемнтов массива:\t" << SumArr(arrChTwoDim, M, i_SIZE) << endl;
	cout << "Среднее-арифметическое всех элементов массива:\t" << Avg(arrChTwoDim, M, i_SIZE) << endl;
	cout << "Минимальный элемент массива:\t" << minValueIn(arrChTwoDim, M, i_SIZE) << endl;
	cout << "Максимальный элемент массива:\t" << maxValueIn(arrChTwoDim, M, i_SIZE) << endl;
	cout << "Сортированный массив:\n\n"; SortArr(arrChTwoDim, M, i_SIZE); Print(arrChTwoDim, M, i_SIZE);
	cout << "\n\nСдвиг элементов массива  типа char влево:\n\n"; ShiftLeft(arrChTwoDim, M, i_SIZE); Print(arrChTwoDim, M, i_SIZE);
	cout << "\n\nСдвиг элементов массива типа char вправо:\n\n"; ShiftRight(arrChTwoDim, M, i_SIZE); Print(arrChTwoDim, M, i_SIZE);

	cout << "\nДвумерный массив типа double:\n\n";

	FillRand(arrTwoDimDoub, M, i_SIZE);
	Print(arrTwoDimDoub, M, i_SIZE);
	cout << endl << "Сумма элемнтов массива:\t" << SumArr(arrTwoDimDoub, M, i_SIZE) << endl;
	cout << "Среднее-арифметическое всех элементов массива:\t" << Avg(arrTwoDimDoub, M, i_SIZE) << endl;
	cout << "Минимальный элемент массива:\t" << minValueIn(arrTwoDimDoub, M, i_SIZE) << endl;
	cout << "Максимальный элемент массива:\t" << maxValueIn(arrTwoDimDoub, M, i_SIZE) << endl;
	cout << "Сортированный массив:\n\n"; SortArr(arrTwoDimDoub, M, i_SIZE); Print(arrTwoDimDoub, M, i_SIZE);
	cout << "\n\nСдвиг элементов массива  типа double влево:\n\n"; ShiftLeft(arrTwoDimDoub, M, i_SIZE); Print(arrTwoDimDoub, M, i_SIZE);
	cout << "\n\nСдвиг элементов массива типа double вправо:\n\n"; ShiftRight(arrTwoDimDoub, M, i_SIZE); Print(arrTwoDimDoub, M, i_SIZE);


	

}

