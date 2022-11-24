#include <iostream>
#include <Windows.h>
using namespace std;

/*int main()  - главный вход в программе
{
	int i= 0;
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	
	string s;
	cout << "Введите слово" << endl;
	cin >> s;
	
	while (i < s.length()) - по строчный вывод переменной
	{
		cout << s[i] << endl;
		i++;
	}
		return 0;
}*/

// Двухмерные массивы 3х3


// Двухмерные массивы 3х3 min и max с использованием rand
/*const int col = 3;
const int row = 3;


int main()
{
	int i = 0;
	int ar[row][col] = { {1,2,3}, {4,5,6}, {7,8,9} };
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int min = 100000;
	int max = 0;
	
	for (int i = 0; i < row; i++)
	{

		
		for (int j = 0; j < col; j++)
		{
			
			ar[i][j] = rand() % 100;
			//cin >>ar[i][j];
	
		}
	}

	for (int i = 0; i < row; i++)
	{

		for (int j = 0; j < col; j++)
		{
			
			if (ar[i][j] > max) { max = ar[i][j]; }
			if (ar[i][j] < min) { min = ar[i][j]; }

		}

			
	}
	cout << "Максимальный элемент" << max << endl;
	cout << "Минимальный элемент" << min << endl;
	return 0;
}*/


//void - тип, функции которая нечего не возвращает

/*void vivod()
	{
		
		cout << "Что-то либо" << endl;

		
	}

int Sum(int a, int b)
{
	return a + b;
}

double Sum(double a, double b)
{
	return a + b;
}


//Вложения в код
int Sum(int a, int b)
{
	return a + b;
}
int subtraction(int a, int b)
{
	return a - b;
}
int Umnog(int a, int b)
{
	return a * b;
}
int division (int a, int b)
{
	return a / b;
}
void show()
{
	int a = 0, b = 0;
	char c;
	cout << "Введити 2 числа." << endl;
	cin >> a;
	cin >> b;
	cout << "Введите арифметическую операцию." << endl;
	cin >> c;

	switch (c)
	{
	case '+': 
		cout << "Сумма чисел  " << Sum(a, b); 
		break;
	case '*':
		cout << "Произведение чисел равна a * b :" << Umnog(a, b);
		break;
	case '-':
		cout << "Разность чисел равна a - b :" << subtraction(a, b);
		break;
	case '/':
		if (b == 0)
		{
			cout << "На 0 делить нельзя";
			break;
		}
		else
		{
			cout << "Частное a / b = " << division(a, b);
			break;

		}
	
	
	}


}


//Код
int main()
{
	setlocale(LC_ALL, "rus");

	show();

return 0;	
}*/


int factorial(int a)
{
	if (a > 1)
	{
		return a * factorial(a - 1);
	}
	else
	{
		return 1;
	}


}
int main()
{
	setlocale(LC_ALL, "rus");

	cout << factorial(4);

	return 0;
}

