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
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� �������� ����� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr, n) << endl;
	cout << endl;

	char arr3[n] = {};
	FillRand(arr3, n);
	Print(arr3, n);
	cout << endl;
	cout << "����� ��������� �������: " << Sum(arr3, n) << "\t" << endl;
	cout << "������� �������������� �������� ����� ��������� �������: " << Avg(arr3, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr3, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr3, n) << endl;
	cout << endl;

	double brr[n];
	FillRand(brr, n);
	Print(brr, n);
	cout << endl;
	cout << "����� ��������� �������: " << Sum(brr, n) << endl;
	cout << "������� �������������� �������� ����� ��������� �������: " << Avg(brr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(brr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(brr, n) << endl;
	cout << endl;

	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << endl;
	cout << "����� ��������� �������: " << Sum(arr2, ROWS, COLS) << endl;
	cout << "������� �������������� �������� ����� ��������� �������: " << Avg(arr2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr2, ROWS, COLS) << endl;
	cout << endl;

	char arr4[ROWS][COLS];
	FillRand(arr4, ROWS, COLS);
	Print(arr4, ROWS, COLS);
	cout << endl;
	cout << "����� ��������� �������: " << Sum(arr4, ROWS, COLS) << endl;
	cout << "������� �������������� �������� ����� ��������� �������: " << Avg(arr4, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr4, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr4, ROWS, COLS) << endl;
	cout << endl;

	double brr2[ROWS][COLS];
	FillRand(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);
	cout << endl;
	cout << "����� ��������� �������: " << Sum(brr2, ROWS, COLS) << endl;
	cout << "������� �������������� �������� ����� ��������� �������: " << Avg(brr2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(brr2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(brr2, ROWS, COLS) << endl;
	cout << endl;

	cout << "��������������� int ������:\n";
	Sort(arr, n);
	cout << endl;
	cout << "��������������� char ������:\n";
	Sort(arr3, n);
	cout << endl;
	cout << "��������������� double ������:\n";
	Sort(brr, n);
	cout << endl;
	Sort(arr2, ROWS, COLS);
	cout << "��������������� int 2D ������:\n";
	Print(arr2, ROWS, COLS);
	cout << endl;
	Sort(arr4, ROWS, COLS);
	cout << "��������������� char 2D ������:\n";
	Print(arr4, ROWS, COLS);
	cout << endl;
	Sort(brr2, ROWS, COLS);
	cout << "��������������� double 2D ������:\n";
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
