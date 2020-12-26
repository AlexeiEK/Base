#pragma once
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