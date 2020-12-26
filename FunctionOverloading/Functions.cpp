#include "Functions.h"


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