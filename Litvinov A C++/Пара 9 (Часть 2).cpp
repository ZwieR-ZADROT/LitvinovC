#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

//begin() - начало массива
//end() - конец массива

/*
void zapolnenie(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int isk = rand() % 100;
		while (search(a, size, isk) == 1)
		{
			isk = rand() % 100;
		}
		a[i] = isk;
	}

}
void show(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << endl;
	}
}


int main()
{
	setlocale(LC_ALL, "ru");

	srand(time(0));


	zapolnenie(arr, size);
	show(arr, size);



	return 0;

}
*/

bool search(int a[], int size, int isk);

void zapolnenie(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int isk = rand() % 100;
		while (search(a, size, isk) == 1)
		{
			isk = rand() % 100;
		}
		a[i] = isk;
	}

}

void show(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << endl;
	}
}

bool search(int a[], int size, int isk)
{
	for (int i = 0; i < size; i++)
	{
		if(a[i] == isk)
		{
			return 1;
			break;
		}
	}
	return 0;
}


// Если нашел нужное значение 1 если нет 0
int main()
{
	setlocale(LC_ALL, "ru");

	srand(time(0));
	int const size = 5;
	int a = 0;
	int arr[size]{};

	zapolnenie(arr, size);
	show(arr, size);

	cout << "Введите искомое значение:" << endl;
	cin >> a;

	cout << search(arr, size, a);

	return 0;

}
