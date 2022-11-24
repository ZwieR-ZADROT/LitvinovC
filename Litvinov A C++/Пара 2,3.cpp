
// Возведение в 10 степень
#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0;
	int sum = 1;
	
	setlocale(LC_ALL, "rus");
	
	cout << "Введите число" << endl;
	cin >> a;
	
	for (int i = 0; i<10; i++)
	{
		sum = sum * a;
	
	}
	cout << sum;
		
	return 0;
}

	//Синтаксис Цикла While
	/*

while (a < 8)
{
	a++;
	cout << a << endl;
}

do
{
	a++;
	cout << a << endl;
} while (a < 8)
*/
	
	// %
	/*srand(time(0)); - уникальное знасение чтобы было
a = rand() % 3 +1;
cout << a;*/
	
	//День недели
	/*cout << "Введите день недели" << endl;
	cin >> a;
	
	switch (a)
	{
	case 1:
		cout << "Понедельник ";
		break;
	case 2:
		cout << "Вторник ";
		break;
	case 3:
		cout << "Среда ";
		break;
	case 4:
		cout << "Четверг ";
		break;
	case 5:
		cout << "Пятница ";
		break;
	case 6:
		cout << "Суббота ";
		break;
	case 7:
		cout << "Воскресенье ";
		break;
	default:
		cout << "ОШИБКА!!! ";
	}*/
	
	//Калькулятор
	/*
	#include <iostream>
	using namespace std;

	int main()
	{
	double a = 0;
	double b = 0;
	char c;
	setlocale(LC_ALL, "rus");
	
	cout << "Введите 2 числа" << endl;
	cin >> a;
	cin >> b;
	
	
	cout << "Введите арифметическую операцию." << endl;
	cin >> c;

	switch (c)
	{
	case '+':
			cout << "Сумма чисел равна a + b :" << a + b;
			break;
	case '-':
			cout << "Сумма чисел равна a - b :" << a-b;
			break;
	case '*':
		cout << "Сумма чисел равна a * b :" << a * b;
			break;
		
	case '/':
		if (b==0)
		{	
		cout << "На 0 делить нельзя" ;
		break;
		}
		else
		{
		cout << "Сумма чисел равна a / b :" << a / b;
		break;
		
		}
		
	}


	

	return 0;

}
*/