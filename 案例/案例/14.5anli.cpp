//#pragma once
#include <iostream>
using namespace std;
class Complex
{
public:
	Complex(double px=1,double py=0)
	{
		x = px;
		y = py;
	}
	Complex operator-(Complex&m)
	{
		return Complex(x-m.x,y-m.y);
	}
	void printxy()
	{
		cout <<"a3("<<x<<"," <<y <<")"<< endl;
	}

	Complex(const Complex &m_xy);

	~Complex();

private:
	double x, y;

};

Complex::Complex(const Complex &m_xy)
{
	x = m_xy.x;
	y = m_xy.y;
}

Complex::~Complex()
{
}
void main()
{
	Complex a1(6, 3), a2(2, 4), a3;
	a3 = a2 - a1;
	a3.printxy();
	system("pause");
}