#include <ctime>
#include <fstream>
#include <string>
#include <iostream>

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
		return (width * heigth) * 2;
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
	double PI;
public:
	Circle()
	{
		this->radius = 10;
		this->PI = 3.14;
	}
	Circle(int r)
	{
		this->radius = r;
		this->PI = 3.14;
	}
	double Square() override
	{
		return PI * pow(radius,2);
	}
	double Perimetr() override
	{
		return (2 * PI) * radius;
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
		this->side_A = 10;
		this->side_B = 3;
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
		
		return sqrt((Perimetr() * (Perimetr() - side_A) * (Perimetr() - side_B) * (Perimetr() - side_C)));
	}
	double Perimetr() override
	{
		return (side_A + side_B + side_C) / 2;
	}
	void Show() override
	{
		if (side_A < side_B + side_C && side_B < side_A + side_C && side_C < side_B + side_A)
		{
			cout << "Фигура является треугольником со старанами " << side_A << " на " << side_B << " на " << side_C << endl;
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
	/**/
	cout << "================================================ПРЯМОУГОЛЬНИК" << endl;
	Rectangle r(-120, 10);
	r.Show();
	cout << "Площадь = " << r.Square() << "\t" << "Периметр = " << r.Perimetr() << endl;
	Rectangle r1;
	r1.Show();
	cout << "Площадь = " << r1.Square() << "\t" << "Периметр = " << r1.Perimetr() << endl;
	Rectangle r2(12, 10);
	r2.Show();
	cout << "Площадь = " << r2.Square() << "\t" << "Периметр = " << r2.Perimetr() << endl;
	//Окружность
	cout << "================================================ОКРУЖНОСТЬ" << endl;
	Circle z(0);
	z.Show();
	cout << "Площадь = " << z.Square() << "\t" << "Периметр = " << z.Perimetr() << endl;
	Circle z1(3);
	z1.Show();
	cout << "Площадь = " << z1.Square() << "\t" << "Периметр = " << z1.Perimetr() << endl;
	Circle z2;
	z2.Show();
	cout << "Площадь = " << z2.Square() << "\t" << "Периметр = " << z2.Perimetr() << endl;
	//Треугольник
	cout << "================================================ТРЕУГОЛЬНИК" << endl;
	Triangle t;
	t.Show();
	cout << "Площадь = " << t.Square() << "\t" << "Периметр = " << t.Perimetr() << endl;
	Triangle t1 (5,6,7);
	t1.Show();
	cout << "Площадь = " << t1.Square() << "\t" << "Периметр = " << t1.Perimetr() << endl;
	

	return -1;
}
