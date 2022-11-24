#include <iostream>


using namespace std;
/*
//ВОЗВЕДЕНИЕ 2 в 10 степень
int stepen(int a, int b)
{
	
	
	int rez = 1;
	for (int i = 0; i < b; i++)
	{
		rez = rez * a;
	}
	return rez;
}
int main()
{
	setlocale(LC_ALL, "rus");
	
	cout << stepen(2,10) << endl;
	return 0;
}*/
/*
//ВОЗВЕДЕНИЕ В СТПЕНИ ИНТЕРАКТИВ
int main()
{
	int a = 0, b = 0;
	int sum = 1;

	setlocale(LC_ALL, "rus");

	cout << "Введите число" << endl;
	cin >> a;
	
	cout << "Введите степень" << endl;
	cin >> b;


	for (int i = 0; i < b; i++)
	{
		sum = sum * a;

	}
	cout << sum;

	return 0;
}
*/

/*
// & - аперсант
	* - значение ячейки
void test(int *p)
{
	(*p) * 20;
}


int main()
{
	setlocale(LC_ALL, "rus");

	int a = 10;
	
	int* pa = &a;

	cout << &a << endl;
	cout << pa << endl;
	
	cout << "Вывод значений" << endl;
	cout << a << endl;
	cout << *pa << endl;

	test(&a);

}
*/

void swap(int *a, int *b)
{
	*a = *b;
	*b = *a;
}

int main()
{
	setlocale(LC_ALL, "rus");
	int a = 10;
	int b = 30;
	
	cout <<


		swap(&a,&b);
	cout << << a << endl;
	cout << << b << endl;
}