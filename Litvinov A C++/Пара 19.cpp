#include <ctime>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

class Figure //Roditely
{
	virtual double Square() = 0;
	virtual double Perimetr() = 0;
	virtual void Show() = 0;
};

class Rectangle : Figure //Прямоугольник
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
	};
	double Perimetr() override
	{
		return (width * heigth) * 2;
	};

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

class Circle : Figure //Окружность
{

};

class Triangle : Figure //Треугольник
{

};


int main()
{
	setlocale(LC_ALL, "rus");

	
	Rectangle r(-120, 10);
	r.Show();
	cout << "Площадь = " << r.Square() << "\t" << "Периметр = " << r.Perimetr() << endl;
	Rectangle r1;
	r1.Show();
	cout << "Площадь = " << r1.Square() << "\t" << "Периметр = " << r1.Perimetr() << endl;
	Rectangle r2(12,10);
	r2.Show();
	cout << "Площадь = " << r2.Square() << "\t" << "Периметр = " << r2.Perimetr() << endl;
	
	return -1;
}
