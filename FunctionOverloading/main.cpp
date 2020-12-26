#include "Functions.h"

void main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	const int n = 10;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << endl;
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое значение суммы элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	cout << endl;

	char arr3[n] = {};
	FillRand(arr3, n);
	Print(arr3, n);
	cout << endl;
	cout << "Сумма элементов массива: " << Sum(arr3, n) << "\t" << endl;
	cout << "Среднее арифметическое значение суммы элементов массива: " << Avg(arr3, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr3, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr3, n) << endl;
	cout << endl;

	double brr[n];
	FillRand(brr, n);
	Print(brr, n);
	cout << endl;
	cout << "Сумма элементов массива: " << Sum(brr, n) << endl;
	cout << "Среднее арифметическое значение суммы элементов массива: " << Avg(brr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(brr, n) << endl;
	cout << endl;

	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << endl;
	cout << "Сумма элементов массива: " << Sum(arr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое значение суммы элементов массива: " << Avg(arr2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr2, ROWS, COLS) << endl;
	cout << endl;

	char arr4[ROWS][COLS];
	FillRand(arr4, ROWS, COLS);
	Print(arr4, ROWS, COLS);
	cout << endl;
	cout << "Сумма элементов массива: " << Sum(arr4, ROWS, COLS) << endl;
	cout << "Среднее арифметическое значение суммы элементов массива: " << Avg(arr4, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr4, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr4, ROWS, COLS) << endl;
	cout << endl;

	double brr2[ROWS][COLS];
	FillRand(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);
	cout << endl;
	cout << "Сумма элементов массива: " << Sum(brr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое значение суммы элементов массива: " << Avg(brr2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(brr2, ROWS, COLS) << endl;
	cout << endl;

	cout << "Отсортированный int массив:\n";
	Sort(arr, n);
	cout << endl;
	cout << "Отсортированный char массив:\n";
	Sort(arr3, n);
	cout << endl;
	cout << "Отсортированный double массив:\n";
	Sort(brr, n);
	cout << endl;
	Sort(arr2, ROWS, COLS);
	cout << "Отсортированный int 2D массив:\n";
	Print(arr2, ROWS, COLS);
	cout << endl;
	Sort(arr4, ROWS, COLS);
	cout << "Отсортированный char 2D массив:\n";
	Print(arr4, ROWS, COLS);
	cout << endl;
	Sort(brr2, ROWS, COLS);
	cout << "Отсортированный double 2D массив:\n";
	Print(brr2, ROWS, COLS);
	cout << endl;

	Unique(arr, n);
	cout << endl;
	Unique(arr3, n);
	cout << endl;
	Unique(brr, n);
	cout << endl;
	Unique(arr2, ROWS, COLS);
	cout << endl;
	Unique(arr4, ROWS, COLS);
	cout << endl;
	Unique(brr2, ROWS, COLS);
	cout << endl;
}
