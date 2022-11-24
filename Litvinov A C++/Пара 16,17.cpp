#include <ctime>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

/*
class Koord
{
private:
	int x;
	int y;
public:
	Koord(int x, int y) //Конструктор с параметрами
	{
		this->x = x;
		this->y = y;
	}
	Koord() //Конструктор без параметров
	{
		this->x = x;
		this->y = y;
	}
	~Koord()
	{

	}
	void Show()
	{
		cout << "x - " << "\t" << x << "\n"
			<< "y - " << "\t" << y << endl;
	}
	void setKoord(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
//**************************************************
	bool operator == (Koord k1)
	{
		return this->x == k1.x && this->y == k1.y;// равно
	}
	bool operator != (Koord k1)
	{
		return this->x == k1.x && this->y == k1.y;// не равно
	}
	bool operator > (Koord k1)
	{
		return this->x > k1.x && this->y > k1.y;// больше
	}
	bool operator < (Koord k1)
	{
		return this->x < k1.x && this->y < k1.y;// меньше
	}
	bool operator <= (Koord k1)
	{
		return this->x <= k1.x && this->y <= k1.y;// меньше или равно
	}
	bool operator >= (Koord k1)
	{
		return this->x >= k1.x && this->y >= k1.y;// больше или равно
	}
//**************************************************a+=b иначе a = a + b
	Koord & operator + (Koord k1)
	{
		this->x += k1.x;
		this->y += k1.y;
		return *this;
	}
	Koord& operator += (Koord k1)
	{
		this->x += k1.x;
		this->y += k1.y;
		return *this;
	}
};

int main()
{
	int a = 10;
	int b = 20;
	setlocale(LC_ALL, "rus");
	Koord c2(10, 20);
	Koord c3(10, 2);
	Koord l = c2 + c3;
	c2 += c3;
	l.Show();

	if (c2 == c3)
		cout << "РАВНО";
	else
		cout << "НЕ РАВНО";

	return -1;
}*/


class Date
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
	Date(int d, int m, int y)//Конструктор с параметрами
	{
		this->day = d;
		this->month = m;
		this->year = y;
	}
	Date()//Конструктор без параметров
	{
		this->day = 1;
		this->month = 1;
		this->year = 2001;
	}

	//**************************************ЛОГИЧЕСКИЕ ОПЕРАТОРЫ
	//ОПЕРАТОР РАВЕНСТВО
	bool operator == (Date d1)
	{
		return this->year == d1.year && this->month == d1.month && this->day == d1.day;
	}
	//ОПЕРАТОР НЕ РАВНО
	bool operator != (Date d1)
	{
		return this->year == d1.year && this->month == d1.month && this->day == d1.day;
	}
	//ОПЕРАТОР БОЛЬШЕ
	bool operator > (Date d1)
	{
		if (this->year > d1.year)
		{
			return true;
		}
		else if (this->year = d1.year)
		{
			if (this->month > d1.month)
			{
				return true;
			}
			else if (this->month = d1.month)
			{
				if (this->day > d1.day)
				{
					return true;
				}
			}
		}
	}
	//ОПЕРАТОР МЕНЬШЕ
	bool operator < (Date d1)
	{
		if (this->year < d1.year)
		{
			return true;
		}
		else if (this->year = d1.year)
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
	//ОПЕРАТОР БОЛЬШЕ ИЛИ РАВНО
	bool operator >= (Date d1)
	{
		return this->year >= d1.year
			&& this->month >= d1.month
			&& this->day >= d1.day;

	}
	//ОПЕРАТОР МЕНЬШЕ ИЛИ РАВНО
	bool operator <= (Date d1)
	{
		return this->year <= d1.year
			&& this->month <= d1.month
			&& this->day <= d1.day;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	
	Date D(1, 1, 2001);//Конструктор с параметрами
	D.Show();
	Date l;//Конструктор без параметров
	l.Show();
	
	//D = 1.01.2001 l = 01.01.2001
	if (D != l)
	{
		cout << "больше/равно";
	}
	else
	{
		cout << "Меньше";
	}

	return -1;
}