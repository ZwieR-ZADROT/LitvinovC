﻿#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

//begin() - начало массива
//end() - конец массив

//****************************************Заполнение массива рандомными элементами
void zapolnenie(double a[], int n) //Принимаем массив и его длину
{
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100; //Присваемаем элемент каждой ячейки массива
	}

}
//*****************************************Вывод всех строк массива
void show(double a[], int n)//Принимаем массив и его длину
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;//Выводим элементы массива по строчно
	}
}
//*****************************************Принимаем ссылки первой и последней строки массива
void zapolnenie_uk(double* b, double* e)
{
	for (double* i = b; i < e; i++)
	{
		*(i) = rand() % 100;
	}
}
//*****************************************Принимаем ссылки первой и последней строки массива
void show_uk(double* b, double* e)
{
	for (double* i = b; i < e; i++)
	{
		cout << *i << endl;	//Выводим элементы массива по строчно
	}
}
//*****************************************

// 1 рандомные элементы массива
int main()
{
	setlocale(LC_ALL, "ru");

	srand(time(0));
	double massiv1[5]{};//Создаем массив с длинной 5 

	//zapolnenie(massiv1, 5);
	//show(massiv1, 5);

	double* b = begin(massiv1);//Передаем в переменную b ссылку первой строки массива
	double* e = end(massiv1);//Передаем в переменную e ссылку последней строки массива

	zapolnenie_uk(b, e);
	show_uk(b, e);

}


