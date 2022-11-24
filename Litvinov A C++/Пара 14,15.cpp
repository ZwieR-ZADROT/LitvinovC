#include <ctime>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Создать массив, заполнить рандомными числами, вывести, сортировка.
class Mass
{
private:
	
	int *massiv;

public:	
	Mass(int n)//Конструктор
	{
		massiv = new int[n];
		for (int i = 0; i < n; i++)
		{
			massiv[i] = rand() % 100;
		}
	}
	
	~Mass()//Диструктор
	{
		delete[] massiv;
	}
	int Kol()//Длина массива
	{
		return _msize(massiv) / sizeof(int);
	}


	void Show()//Вывод массива
	{
		for (int i = 0; i < Kol(); i++)
		{
			cout << massiv[i] << " ";
		}
	}
	void sortUp()//сортировка по возрастанию
	{
		int k = Kol();
		for (auto i = 0; i < k; i++)
		{
			for (auto j = 0; j < k; j++)
			{
				if (massiv[i] < massiv[j])
				{
					int tmp = massiv[i];
					massiv[i] = massiv[j];
					massiv[j] = tmp;
				}
			}
		}
	}
	void sortDown()//сортировка по убыванию
	{
		int k = Kol();
		for (auto i = 0; i < k; i++)
		{
			for (auto j = i + 1; j < k; j++)
			{
				if (massiv[i] < massiv[j])
				{
					swap(massiv[i], massiv[j]);
				}
			}
		}
	}
	int Min()//найти минимум
	{
		int min = 10000;
		int k = Kol();
		for (auto i = 0; i < k; i++)
		{
			if (massiv[i] < min){ min = massiv[i]; }
		}
		return min;
	}
	int Max()//найти максимум
	{
		int max = 0;
		int k = Kol();
		for (auto i = 0; i < k; i++)
		{
			if (massiv[i] > max){ max = massiv[i]; }
		}
		return max;
	}
	double Avg()//Среднее
	{
		int sum = 0;
		int k = Kol();
		for (auto i = 0; i < k; i++)
		{
			sum += massiv[i];
		}
		return (double)sum / k;
	}
};

int main()
{
	srand(time(0));
	int con = -1;
	setlocale(LC_ALL, "rus");
	Mass massiv(10);
		
	cout << "Введите номер команды: " << endl
		<< "1. - Вывод массива на экран;" << endl
		<< "2. - Отсортировать по возрастанию;" << endl
		<< "3. - Отсортировать по убыванию;" << endl
		<< "4. - Вывести максимальный элемент;" << endl
		<< "5. - Вывести минимальный элемент;" << endl
		<< "6. - Вывести среднее арифметическое всех элементов;" << endl
		<< "0. - Выход;" << endl;
	while (con != 0)		
	{
		cin >> con;
		switch (con)
		{
		case 1:cout << "Массив: "; massiv.Show(); break;
		case 2:massiv.sortUp(); cout << "Массив отсортирован по возрастанию:"; massiv.Show(); break;
		case 3:massiv.sortDown(); cout << "Массив отсортирован по убыванию:"; massiv.Show(); break;
		case 4:cout << "Максимальный элемент - " << massiv.Max() << endl; break;
		case 5:cout << "Минимальный элемент - " << massiv.Min() << endl; break;
		case 6:cout << "Среднее - " << massiv.Avg() << endl; break;
		case 0:cout << "Exit!"; break;
		default:
			break;
		}
	
	}
	return -1;
}