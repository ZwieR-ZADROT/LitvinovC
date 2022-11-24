

#include <iostream>
using namespace std;
const int  SIZE = 10;

int main()
{
	setlocale(LC_ALL, "rus");
	int a=11;
	char c = 'L';
	double d = 0.1;
	bool b = false;
	

	cout << SIZE;

	cout << "Введите число!" << endl; 
	cin >> a;


	if (a == 10)
	{
		cout << "Ваше число равно 10" << endl;

	}
	else
	{
		if (a > 10)
		{
			cout << "Ваше число больше 10" << endl;

		}
		else 
		{

			cout << "Ваше число меньше 10" << endl;

		}
	}
	
	
	cout << a << endl << d << endl << b << endl << c;
	return 0;
}


