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
		width = 10;
		heigth = 10;
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
		If()
	}
	double Perimetr() override{return 10;}
	void Show() override
	{
		if (width == 0 && heigth == 0)
		{
			cout << "Вы ввели не коректные данные!"
				"Фигура не является прямоугольником!" << endl;
		}
		else
		{
			cout << "Фигура является прямоугольником со старанами " << width
				<< "на" << heigth << endl;
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

	Rectangle r(-120,10);
	r.Show();
	/*Rectangle r1;
	r1.Show();
	Rectangle r2(12,10);
	r2.Show();*/
		
	return -1;
}