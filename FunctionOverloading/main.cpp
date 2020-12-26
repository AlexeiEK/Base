#include<iostream>
#include<time.h>
using namespace std;

const int ROWS = 8;
const int COLS = 5;

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

int Sum(int arr[], const int n);
char Sum(char arr[], const int n);
double Sum(double arr[], const int n);
int Sum(int arr[ROWS][COLS], const int m, const int n);
char Sum(char arr[ROWS][COLS], const int m, const int n);
double Sum(double arr[ROWS][COLS], const int m, const int n);

double Avg(int arr[], const int n);
double Avg(char arr[], const int n);
double Avg(double arr[], const int n);
double Avg(int arr[ROWS][COLS], const int m, const int n);
double Avg(char arr[ROWS][COLS], const int m, const int n);
double Avg(double arr[ROWS][COLS], const int m, const int n);

int minValueIn(int arr[], const int n);
char minValueIn(char arr[], const int n);
double minValueIn(double arr[], const int n);
int minValueIn(int arr[ROWS][COLS], const int m, const int n);
char minValueIn(char arr[ROWS][COLS], const int m, const int n);
double minValueIn(double arr[ROWS][COLS], const int m, const int n);

int maxValueIn(int arr[], const int n);
char maxValueIn(char arr[], const int n);
double maxValueIn(double arr[], const int n);
int maxValueIn(int arr[][COLS], const int m, const int n);
char maxValueIn(char arr[][COLS], const int m, const int n);
double maxValueIn(double arr[][COLS], const int m, const int n);

void Sort(int arr[], const int n); //Сортировка int массива
void Sort(char arr[], const int n); //Сортировка char массива
void Sort(double arr[], const int n); //Сортировка double массива
void Sort(int arr[][COLS], const int m, const int n); //Сортировка int 2D массива
void Sort(char arr[][COLS], const int m, const int n); //Сортировка char 2D массива
void Sort(double arr[][COLS], const int m, const int n); //Сортировка double 2D массива

void Unique(int arr[], const int n);
void Unique(char arr[], const int n);
void Unique(double arr[], const int n);
void Unique(int arr[ROWS][COLS], const int m, const int n);
void Unique(char arr[ROWS][COLS], const int m, const int n);
void Unique(double arr[ROWS][COLS], const int m, const int n);

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
int Sum(int arr[], const int n)
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
int Sum(int arr[ROWS][COLS], const int m, const int n)
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
double Avg(int arr[], const int n)
{
	double avg = (double)Sum(arr, n) / n;
	return avg;
}
double Avg(char arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double brr[], const int n)
{
	return (double)Sum(brr, n) / n;
}
double Avg(int arr[ROWS][COLS], const int m, const int n)
{
	int N = m * n; // Количество элементов массива
	double avg = (double)Sum(arr, ROWS, COLS) / N;
	return avg;
}
double Avg(char arr[ROWS][COLS], const int m, const int n)
{
	return (double)Sum(arr, ROWS, COLS) / (m * n);
}
double Avg(double brr[ROWS][COLS], const int m, const int n)
{
	return (double)Sum(brr, ROWS, COLS) / (m * n);
}
int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++) if (arr[i] < min)min = arr[i];
	return min;
}
char minValueIn(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 0; i < n; i++) if (arr[i] < min)min = arr[i];
	return min;
}
double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++) if (arr[i] < min)min = arr[i];
	return min;
}
int minValueIn(int arr[ROWS][COLS], const int m, const int n)
{
	int min = arr[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	return min;
}
char minValueIn(char arr[ROWS][COLS], const int m, const int n)
{
	char min = arr[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	return min;
}
double minValueIn(double arr[ROWS][COLS], const int m, const int n)
{
	double min = arr[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	return min;
}
int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++) if (arr[i] > max)max = arr[i];
	return max;
}
char maxValueIn(char arr[], const int n)
{
	char max = arr[0];
	for (int i = 0; i < n; i++) if (arr[i] > max) max = arr[i];
	return max;
}
double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++) if (arr[i] > max) max = arr[i];
	return max;
}
int maxValueIn(int arr[][COLS], const int m, const int n)
{
	int max = arr[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	return max;
}
char maxValueIn(char arr[][COLS], const int m, const int n)
{
	char max = arr[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	return max;
}
double maxValueIn(double arr[][COLS], const int m, const int n)
{
	double max = arr[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	return max;
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	Print(arr, n);
}
void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	Print(arr, n);
}
void Sort(double brr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (brr[j] < brr[i])
			{
				double buffer = brr[i];
				brr[i] = brr[j];
				brr[j] = buffer;
			}
		}
	}
	Print(brr, n);
}
void Sort(int arr[][COLS], const int m, const int n)
{
	//int iterations = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = i; k < m; k++)
			{
				//int l;
				//k == i ? l = j + 1 : l = 0;
				for (int l = k == i ? j + 1 : 0; l < n; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
					//iterations++;
				}
			}
		}
	}
	//cout << "Количество итераций: " << iterations << endl;
}
void Sort(char arr[][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = i; k < m; k++)
			{
				int l;
				k == i ? l = j + 1 : l = 0;
				for (; l < n; l++)
				{
					if (arr[i][j] > arr[k][l])
					{
						char buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}
void Sort(double arr[][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = i; k < m; k++)
			{
				int l;
				for (k == i ? l = j + 1 : l = 0; l < n; l++)
				{
					if (arr[i][j] > arr[k][l])
					{
						double buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}
void Unique(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			unique = true;
			arr[i] = rand() % 11;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);

	}
	Print(arr, n);
}
void Unique(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			unique = true;
			arr[i] = rand() % 255;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);

	}
	Print(arr, n);
}
void Unique(double brr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			unique = true;
			brr[i] = rand() % 1000;
			brr[i] /= 10;
			for (int j = 0; j < i; j++)
			{
				if (brr[i] == brr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);

	}
	Print(brr, n);
}
void Unique(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				unique = true;
				arr[i][j] = rand() % 100;
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; i == k ? l < j : l < COLS; l++)
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
				}
			} while (!unique);
		}
	}
	Print(arr, ROWS, COLS);
}
void Unique(char arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				unique = true;
				arr[i][j] = rand();
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; i == k ? l < j : l < COLS; l++)
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
				}
			} while (!unique);
		}
	}
	Print(arr, ROWS, COLS);
}
void Unique(double brr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				unique = true;
				brr[i][j] = rand() % 1000;
				brr[i][j] /= 100;
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; i == k ? l < j : l < COLS; l++)
						if (brr[i][j] == brr[k][l])
						{
							unique = false;
							break;
						}
				}
			} while (!unique);
		}
	}
	Print(brr, ROWS, COLS);
}