#include <ctime>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

class Person
{
protected: //Даёт возможность обращаться из Emploee
	string name;
	int age;
public:
	
	Person(int age, string name)//Конструктор с параметрами
	{
		this->age = age;
		this->name = name;
	}
	virtual void Show()
	{
		cout << "name\t" << name << "\tage\t" << age;
	}
};
//person::show

class EmpLoyee : public Person
{
	private:
		string company;
	public:
		EmpLoyee(int age, string name, string company) : Person(age, name)
		{
			this->company = company;
		}
		void Show() 
		{
		Person::Show();
			cout << "\tcompany\t" << company;
		}
};

/*//virtyal
class */EmpLoyee : public Person
{
private:
	string company;
public:
	EmpLoyee(int age, string name, string company) : Person(age, name)
	{
		this->company = company;
	}
	void Show() override
	{
		cout << "name\t" << name << "\tage\t" << age << "\tcompany\t" << company;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");

	EmpLoyee P(10, "Vasa", "company");
	P.Show();


	return -1;
}