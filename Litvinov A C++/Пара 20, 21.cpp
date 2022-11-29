#include <ctime>
#include <fstream>
#include <string>
#include <iostream>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif


using namespace std;
//Roditely
class Figure
{
	virtual double Square() = 0;
	virtual double Perimetr() = 0;
	virtual void Show() = 0;
};
//Прямоугольник
class Rectangle : Figure
{
private:
	int width;
	int heigth;
public:
	Rectangle()
	{
		this->width = 10;
		this->heigth = 10;
	}
	Rectangle(int w, int h)
	{
		width = 0; heigth = 0;
		if (w > 0 && h > 0)
		{
			this->width = w;
			this->heigth = h;
		}
	}
	double Square() override
	{
		return width * heigth;
	}
	double Perimetr() override
	{
		return (width + heigth) * 2;
	}
	void Show() override
	{
		if (width == 0 && heigth == 0)
		{
			cout << "Вы ввели не коректные данные!" << "\n"
				<< "Фигура не является прямоугольником!" << endl;
		}
		else
		{
			cout << "Фигура является прямоугольником со старанами " << width
				<< " на " << heigth << endl;
		}
	}

};
//Окружность
class Circle : Figure
{
private:
	int radius;
public:
	Circle()
	{
		this->radius = 10;

	}
	Circle(int r)
	{
		this->radius = r;
	}
	double Square() override
	{
		return M_PI * pow(radius, 2);
	}
	double Perimetr() override
	{
		return (2 * M_PI) * radius;
	}
	void Show() override
	{
		if (radius <= 0)
		{
			cout << "Вы ввели не коректные данные!" << "\n"
				<< "Окружность c радиусом " << radius << " не существует!" << endl;
		}
		else
		{
			cout << "Фигура является окружностью c радиусом " << radius << endl;
		}
	}

};
//Треугольник
class Triangle : Figure
{
private:
	int side_A;
	int side_B;
	int side_C;
public:
	Triangle()
	{
		this->side_A = 15;
		this->side_B = 13;
		this->side_C = 7;
	}
	Triangle(int a, int b, int c)
	{
		this->side_A = a;
		this->side_B = b;
		this->side_C = c;
	}
	double Square() override
	{
		int p = (side_A + side_B + side_C) / 2;
		return sqrt((p * (p - side_A) * (p - side_B) * (p - side_C)));
	}
	double Perimetr() override
	{
		return (side_A + side_B + side_C);
	}
	int max()
	{
		int m = 0;
		if (side_A > side_B)
		{
			m = side_A;
		}
		else
		{
			m = side_B;
		}
		if (m < side_C)
		{
			m = side_C;
		}
		return m;
	}
	int min()
	{
		int m = 0;
		if (side_A < side_B)
		{
			m = side_A;
		}
		else
		{
			m = side_B;
		}
		if (m > side_C)
		{
			m = side_C;
		}
		return m;
	}
	void Show() override
	{
		int gipot = 0;
		int kat1 = 0;
		int kat2 = 0;
		gipot = max();
		kat1 = min();
		kat2 = (side_A + side_B + side_C) - gipot - kat1;

		if (side_A < side_B + side_C && side_B < side_A + side_C && side_C < side_B + side_A)
		{
			if ((side_A == side_B) && (side_B == side_C))
			{ 
				cout << "Фигура является равносторонним треугольником со старанами " << side_A << " на " << side_B << " на " << side_C << endl; 
			}
			else if (side_A == side_B)
			{
				if (side_A != side_C || side_B != side_C)
				{
					cout << "Фигура является равнобедренным треугольником со старанами " << side_A << " на " << side_B << " на " << side_C << endl;
				}				
			}
			else if (side_B == side_C)
			{
				if (side_B != side_A || side_C != side_A)
				{
					cout << "Фигура является равнобедренным треугольником со старанами " << side_A << " на " << side_B << " на " << side_C << endl;
				}
			}
			else if (side_A == side_C)
			{
				if (side_A != side_B || side_C != side_B)
				{
					cout << "Фигура является равнобедренным треугольником со старанами " << side_A << " на " << side_B << " на " << side_C << endl;
				}
			}
			else if ((gipot * gipot) == ((kat1 * kat1) + (kat2 * kat2)))
			{
				cout << "Фигура является прямоугольным треугольником со старанами " << side_A << " на " << side_B << " на " << side_C << endl;
			}
		}
		else
		{
			cout << "Вы ввели не коректные данные!" << "\n"
				<< "Треугольник не существует!" << endl;
		}
	}
};

	int main()
	{
		setlocale(LC_ALL, "rus");
		
		//Прямоугольник
		/*
		cout << "================================================ПРЯМОУГОЛЬНИК" << endl;
		Rectangle r(-120, 10);
		r.Show();
		cout << "S = " << r.Square() << "\t" << "P = " << r.Perimetr() << endl;
		Rectangle r1;
		r1.Show();
		cout << "S = " << r1.Square() << "\t" << "P = " << r1.Perimetr() << endl;
		Rectangle r2(12, 10);
		r2.Show();
		cout << "S = " << r2.Square() << "\t" << "P = " << r2.Perimetr() << endl;
		//Окружность
		cout << "================================================ОКРУЖНОСТЬ" << endl;
		Circle z(0);
		z.Show();
		cout << "S = " << z.Square() << "\t" << "P = " << z.Perimetr() << endl;
		Circle z1(3);
		z1.Show();
		cout << "S = " << z1.Square() << "\t" << "P = " << z1.Perimetr() << endl;
		Circle z2;
		z2.Show();
		cout << "S = " << z2.Square() << "\t" << "P = " << z2.Perimetr() << endl;*/
		//Треугольник
		cout << "================================================ТРЕУГОЛЬНИК" << endl;
		Triangle t(3, 4, 5);
		t.Show();
		cout << "S = " << t.Square() << "\t" << "P = " << t.Perimetr() << endl;
		Triangle t1(4, 4, 5);
		t1.Show();
		cout << "S = " << t1.Square() << "\t" << "P = " << t1.Perimetr() << endl;
		Triangle t2(4, 4, 4);
		t2.Show();
		cout << "S = " << t2.Square() << "\t" << "P = " << t2.Perimetr() << endl;

		return -1;
	}