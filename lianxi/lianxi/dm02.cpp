#include <iostream>
using namespace std;
class Complex
{
public:
	Complex(int a = 0, int b = 0)
	{
		this->a = a;
		this->b = b;
	}
	void printCom()
	{
		cout << a << "+" << b << "i" << endl;
	}
	
	Complex operator+(Complex &c2)
	{
		Complex tmp(a + c2.a, b + c2.b);
		return tmp;
	}
	Complex& operator++()
	{
		a++;//
		b++;
		return *this;
	}
	

	~Complex();

private:
	int a;
	int b;

};

void
void main()
{
	system("pause");
}

