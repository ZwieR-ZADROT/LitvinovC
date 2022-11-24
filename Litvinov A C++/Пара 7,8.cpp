#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
//уравнение в функции
/*
double uravnenie(double a, double b)
{
	double y1,y2,y3,y4,z1 = 0;
	
	//1 часть
	y1 = 2 * b + a - ((4 * pow(a, 2) - pow(b, 2)) / a);
	y2 = pow(b, 3) + a * pow(b, 2) - 3 * pow(a, 2) * b;
	y3 = (pow(a, 3) * b) - (2 * pow(a, 2) * pow(b, 2)) + (a * pow(b, 3));
	y4 = pow(a, 2) - pow(b, 2);
	//2 часть
	if (y2 == 0 || y4 == 0)
	{
		cout << "На 0 делить нельзя" << endl;
		return 0;
	}
	else
	{
	//3 часть
		z1 = y1 / y2 * y3 / y4;
		return z1;
	}

}


int main()
{
	double a = 0;
	double b = 0;
	setlocale(LC_ALL, "rus");
	cout << "Введите два числа a и b" << endl;
	cin >> a;
	cin >> b;
	double i = uravnenie(a, b);
	cout << i << endl;

	return 0;
}



// массив в функции


// ссылка на ячейку
//* - разыменователь
//& - ссылка на ячейку
int main()

{
	setlocale(LC_ALL, "ru");
	
	int a = 10;
	double d = 23.3;
	
	int * pa = &a;
	double * pd = &d;
	
	cout << pd << "\t" << *pd << endl;
	cout << pa << "\t" << *pa << endl;
	
	(*pd)++;
	(*pa)++;
	
	cout << pd << "\t" << *pd << endl;
	cout << pa << "\t" << *pa << endl;
	

	
	return 0;
}


//ссылки из функции
void tt(int p)
{
	p += 10;
}
void test(int * p)
{
	(*p) += 10;
}


int main()
{
	setlocale(LC_ALL, "ru");

	int a = 10;

	cout << a << endl;
	
	tt(a);
	cout << a << endl;


	test(&a);
	cout << a;

	return 0;
}*/

//Cсылки на ячейки памяти и их значение с помощью функции и массива
void test(int nums[], int n)
{
	srand(time(0));
	n = rand() % 3 + 1;
	return n;
}
int main()
{
	setlocale(LC_ALL, "ru");

	int massiv[7]{};
	int n sizeof(massiv) / sizeof(massiv[0]);
	
	test(massiv, n);


}
