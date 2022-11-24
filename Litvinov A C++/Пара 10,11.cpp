#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

//Динамический одномерный массив с любым количеством элементов
/*
int main()
{
	setlocale(LC_ALL, "ru");
	
	srand(time(0));
	int size = 0;
	cout << "Введите искомое значение" << endl;
	cin >> size;

	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << endl;
	}
	delete[] arr; //Удаление выделенной памяти
	
	return 0;

}


// создание второго массива и копирование 1-го во 2-ой и ссылки
int main()
{
	setlocale(LC_ALL, "ru");

	srand(time(0));
	int size = 0;
	cout << "Введите искомое значение" << endl;
	cin >> size;

	int* arr = new int[size]; // 1 массив
	int* arr2 = new int[size] {}; //2 массив
	
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100; // заполнение 1 массива случайными числами
		cout << arr[i] << endl; // вывод чисел 1 массива
	}
	cout << "=======================" << endl;

	for (int i = 0; i < size; i++)
	{
		arr2[i] = rand() % 100; // заполнение 2 массива случайными числами
		cout << arr2[i] << endl; // вывод чисел 2 массива
	}
	cout << arr << "\t" << arr2 << endl; //ссылки на 1 и 2 массивы

	for (int i = 0; i < size; i++)
	{
		arr2[i] = arr[i]; //копирование одно массива в другой
	}
	cout << arr << "\t" << arr2 << endl; //ссылки на 1 и 2 массивы
	
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t"; //числа в массиве 1
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr2[i] << "\t";//числа в массиве 2
	}
	cout << endl;

	delete[] arr; //Удаление выделенной памяти 1 массива
	delete[] arr2;//Удаление выделенной памяти 2 массива
	
	return 0;

}

//Создание 2-ух мерного динамического массива

int main()
{

	srand(time(0));
	//*********************************инцилизация кол-ва строк и столбцов
	int rows = 3;
	int cols = 3;
	//*********************************СОЗДАНИЕ ДИНАМИЧЕСКОГО 2-УХ МЕРНОГО МАССИВА
	int ** arr = new int* [rows];
	//*********************************инцилизация случайными числами
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
	//*********************************вывод на экран двухмерного массива
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	//*********************************удаление двухмерного массива
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	//*********************************

	return 0;

}


//Создание 2-ух мерного динамического массива Интерактив

int main()
{

	srand(time(0));
	setlocale(LC_ALL, "rus");
	//*********************************инцилизация кол-ва строк и столбцов Пользователем
	int rows = 0;
	int cols = 0;
	cout << "Введите количество строк " << endl;
	cin >> rows;
	cout << "Введите количество столбцов" << endl;
	cin >> cols;
	//*********************************СОЗДАНИЕ ДИНАМИЧЕСКОГО 2-УХ МЕРНОГО МАССИВА
	int** arr = new int* [rows];
	//*********************************инцилизация случайными числами
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
	//*********************************вывод на экран двухмерного массива
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	//*********************************удаление двухмерного массива
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	//*********************************

	return 0;
}


// Врезка в коде без вывода на продакшен

#define DEBUG //имя переменной
int main()
{
	#ifdef DEBUG //вызов переменной
	cout << 3.14;
	#endif // DEBUG
}


//Тернарный оператор

int main()
{
	int a = 7;
	//(Условие)?если истина:если ложь
	(a < 10) ? cout << "<10" : cout << ">=10";

}


//Перечисление
enum { first = 2, second, third};

int main()
{
	cout << third << endl; //выводит число 4
}*/