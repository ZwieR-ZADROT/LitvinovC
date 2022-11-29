#include <ctime>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;
/*
class Dates
{
private:
		int day;
		int month;
		int year;
public:
	void Show()
	{
		cout << "Дата: " << day << "." << month << "." << year << endl;
	}
	Dates()
	{
		this->day = 1;
		this->month = 10;
		this->year = 2001;
	}
	Dates(int d, int m, int y)
	{
		this->day = d;
		this->month = m;
		this->year = y;
	}
	//*******************************ОПЕРАТОРЫ
//РОВНО
	bool operator == (Dates d1)
	{
		return this->year == d1.year && this->month == d1.month && this->day == d1.day;
	}
//НЕ РОВНО
	bool operator != (Dates d1)
	{
		return this->year == d1.year && this->month == d1.month && this->day == d1.day;
	}
//БОЛЬШЕ
	bool operator > (Dates d1)
	{
		if (this->year > d1.year)
		{
			return true;
		}
		else if (this->year == d1.year)
		{
			if (this->month > d1.month)
			{
				return true;
			}
			else if (this->month == d1.month)
			{
				if (this->day > d1.day)
				{
					return true;
				}
				else if (this->day == d1.day || this->day < d1.day)
				{
					return false;
				}
			}
		}
	}
//МЕНЬШЕ
	bool operator < (Dates d1)
	{
		{
			if (this->year < d1.year)
			{
				return true;
			}
			else if (this->year == d1.year)
			{
				if (this->month < d1.month)
				{
					return true;
				}
				else if (this->month = d1.month)
				{
					if (this->day < d1.day)
					{
						return true;
					}
				}
			}
		}
	}
};



int main()
{
	setlocale(LC_ALL, "");

	Dates z;
	z.Show();
	Dates z1(11, 10, 2000);
	z1.Show();

	if (z < z1)
	{
		cout << "МЕНЬШЕ";
	}
	else
	{
		cout << "БОЛЬШЕ";
	}



	return -1;
}




class Dates
{
	
private:
	int day;
	int month;
	int year;
public:
	void Show()
	{
		cout << "Дата: " << day << "." << month << "." << year << endl;
	}
	void Proverka(){}
	Dates()
	{
		this->day = 1;
		this->month = 1;
		this->year = 1;
	}
	Dates(int d, int m, int y)
	{
		this->day = d;
		this->month = m;
		this->year = y;
	}
	Dates& operator++ ()//++a - префиксный
	{
		day++;
		month++;
		year++;
		return *this;
	}
	Dates& operator++ (int d)//a++ - постфиксный
	{
		Dates tmp(*this);
		this->day++;
		this->month++;
		this->year++;
		return tmp;
	}
	friend void tmp(Dates& a);
};

void tmp(Dates& a)
{
	cout << a.day;
}

int main()
{
	Dates a;
	Dates b = a;
	tmp(a);

	return 0;
}
*/

class Ar
{
private:
	int* arr;
	int size;
public:
	Ar(int size)
	{
		this->size = size;
		arr = new int[size];
			for (int i = 0; i < size; ++i)
			{
				arr[i] = rand() % 100;
			}
	}
	~Ar()
	{
		delete[] arr;
	}
	Ar(const Ar& ref)
	{
		size = ref.size;
		arr = new int[size];
		for (int i = 0; i < size; ++i)
		{
			arr[i] = ref.arr[i];
		}
	}
	int Kol()//Длина массива
	{
		return _msize(arr) / sizeof(int);
	}
	void Show()//Вывод массива
	{
		for (int i = 0; i < Kol(); i++)
		{
			cout << arr[i] << " " << "\t";
		}
	}
	
};

int main()
{
	srand(time(0));
	Ar a(4);
	a.Show();
	Ar b = a;
	b.Show();
	return 0;
}