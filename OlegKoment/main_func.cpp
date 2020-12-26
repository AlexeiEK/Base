#include<iostream>
#include<time.h>
using namespace std;

const int ROWS = 8;
const int COLS = 5;

//Здесь все огонь!
void FillRand(int arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int m, const int n);
void FillRand(char arr[ROWS][COLS], const int m, const int n);
void FillRand(double arr[ROWS][COLS], const int m, const int n);

void Print(int arr[], const int n);
void Print(char arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int m, const int n);
void Print(char arr[ROWS][COLS], const int m, const int n);
void Print(double arr[ROWS][COLS], const int m, const int n);
////////////////////////////////////////////////

//Здесь я бы тип возвращаемого значения сделал таким же, как тип элементов массива:
long Sum(int arr[], const int n);
char Sum(char arr[], const int n);
double Sum(double arr[], const int n);
long Sum(int arr[ROWS][COLS], const int m, const int n);
char Sum(char arr[ROWS][COLS], const int m, const int n);
double Sum(double arr[ROWS][COLS], const int m, const int n);

//А здесь тип возвращаемого значения везде double:
double Avg(int arr[], const int n);
char Avg(char arr[], const int n);
double Avg(double arr[], const int n);
double Avg(int arr[ROWS][COLS], const int m, const int n);
char Avg(char arr[ROWS][COLS], const int m, const int n);
double Avg(double arr[ROWS][COLS], const int m, const int n);

//Здесь мы возвращаем значение из массива, поэтому тип возвращаемого значения такой же, как тип элементов массива:
void minValueIn(int arr[], const int n);
void minValueIn(char arr[], const int n);
void minValueIn(double arr[], const int n);
void minValueIn(int arr[ROWS][COLS], const int m, const int n);
void minValueIn(char arr[ROWS][COLS], const int m, const int n);
void minValueIn(double arr[ROWS][COLS], const int m, const int n);

void maxValueIn(int arr[], const int n);
void maxValueIn(char arr[], const int n);
void maxValueIn(double arr[], const int n);
void maxValueIn(int arr[][COLS], const int m, const int n);
void maxValueIn(char arr[][COLS], const int m, const int n);
void maxValueIn(double arr[][COLS], const int m, const int n);
//////////////////////////////////////////////////////////////////////

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
	minValueIn(arr, n);
	maxValueIn(arr, n);
	cout << endl;

	char arr3[n] = {};
	FillRand(arr3, n);
	Print(arr3, n);
	cout << endl;
	cout << "Сумма элементов массива: " << Sum(arr3, n) << "\t" << endl;
	cout << "Среднее арифметическое значение суммы элементов массива: " << Avg(arr3, n) << endl;
	minValueIn(arr3, n);
	maxValueIn(arr3, n);
	cout << endl;

	double brr[n];
	FillRand(brr, n);
	Print(brr, n);
	cout << endl;
	cout << "Сумма элементов массива: " << Sum(brr, n) << endl;
	cout << "Среднее арифметическое значение суммы элементов массива: " << Avg(brr, n) << endl;
	minValueIn(brr, n);
	maxValueIn(brr, n);
	cout << endl;

	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << endl;
	cout << "Сумма элементов массива: " << Sum(arr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое значение суммы элементов массива: " << Avg(arr2, ROWS, COLS) << endl;
	minValueIn(arr2, ROWS, COLS);
	maxValueIn(arr2, ROWS, COLS);
	cout << endl;

	char arr4[ROWS][COLS];
	FillRand(arr4, ROWS, COLS);
	Print(arr4, ROWS, COLS);
	cout << endl;
	cout << "Сумма элементов массива: " << Sum(arr4, ROWS, COLS) << endl;
	cout << "Среднее арифметическое значение суммы элементов массива: " << Avg(arr4, ROWS, COLS) << endl;
	minValueIn(arr4, ROWS, COLS);
	maxValueIn(arr4, ROWS, COLS);
	cout << endl;

	double brr2[ROWS][COLS];
	FillRand(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);
	cout << endl;
	cout << "Сумма элементов массива: " << Sum(brr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое значение суммы элементов массива: " << Avg(brr2, ROWS, COLS) << endl;
	minValueIn(brr2, ROWS, COLS);
	maxValueIn(brr2, ROWS, COLS);
	cout << endl;
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++) arr[i] = rand() % 100;
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 255;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 255;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(char arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(double arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
long Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
char Sum(char arr[], const int n)
{
	char sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
long Sum(int arr[ROWS][COLS], const int m, const int n)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
char Sum(char arr[ROWS][COLS], const int m, const int n)
{
	char sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
double Sum(double arr[ROWS][COLS], const int m, const int n)
{
	double sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
//////////////////////////////////////////////////////////////////////////////////////////
double Avg(int arr[], const int n)
{
	//double avg = (double)Sum(arr, n) / n;//Вот здесь ВАЩЕ АГОНЬ!!! 
	//return avg;
	return (double)Sum(arr, n) / n;//Правда можно было бы и вот так сделать
}
char Avg(char arr[], const int n)
{
	char avg = Sum(arr, n) / n;
	return avg;
}
double Avg(double brr[], const int n)
{
	double avg = Sum(brr, n) / n; 
	return avg;
}
double Avg(int arr[ROWS][COLS], const int m, const int n)
{
	//int N = m * n; // Количество элементов массива
	//double avg = (double)Sum(arr, ROWS, COLS) / N;		//Здесь тоже круто!
	//return avg;
	return (double)Sum(arr, ROWS, COLS) / (m * n);//Можно еще так
}
char Avg(char arr[ROWS][COLS], const int m, const int n)
{
	char avg = Sum(arr, ROWS, COLS) / (m * n);
	return avg;
}
double Avg(double brr[ROWS][COLS], const int m, const int n)
{
	int N = m * n; // Количество элементов массива
	double avg = Sum(brr, ROWS, COLS) / N;
	return avg;
}
void minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++) if (arr[i] < min)min = arr[i];
	//cout << "Минимальное значение в массиве: " << min << endl; //Ну такого делать нельзя, функция должна возвращать минимальное значение
}
void minValueIn(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 0; i < n; i++) if (arr[i] < min)min = arr[i];
	cout << "Минимальное значение в массиве: " << min << endl;
}
void minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++) if (arr[i] < min)min = arr[i];
	cout << "Минимальное значение в массиве: " << min << endl;
}
void minValueIn(int arr[ROWS][COLS], const int m, const int n)
{
	int min = arr[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	cout << "Минимальное значение в массиве: " << min << endl;
}
void minValueIn(char arr[ROWS][COLS], const int m, const int n)
{
	char min = arr[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	cout << "Минимальное значение в массиве: " << min << endl;
}
void minValueIn(double arr[ROWS][COLS], const int m, const int n)
{
	double min = arr[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	cout << "Минимальное значение в массиве: " << min << endl;
}
void maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++) if (arr[i] > max)max = arr[i];
	cout << "Максимальное значение в массиве: " << max << endl;
}
void maxValueIn(char arr[], const int n)
{
	char max = arr[0];
	for (int i = 0; i < n; i++) if (arr[i] > max) max = arr[i];
	cout << "Максимальное значение в массиве: " << max << endl;
}
void maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++) if (arr[i] > max) max = arr[i];
	cout << "Максимальное значение в массиве: " << max << endl;
}
void maxValueIn(int arr[][COLS], const int m, const int n)
{
	int max = arr[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	cout << "Максимальное значение в массиве: " << max << endl;
}
void maxValueIn(char arr[][COLS], const int m, const int n)
{
	char max = arr[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	cout << "Максимальное значение в массиве: " << max << endl;
}
void maxValueIn(double arr[][COLS], const int m, const int n)
{
	double max = arr[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	cout << "Максимальное значение в массиве: " << max << endl;
}