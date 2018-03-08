#include <iostream>
using namespace std;
class Complex
{
public:
	Complex(int a = 0,int b=0)
	{
		this->a = a;
		this->b = b;
}
	void printCom()
	{
		cout <<a << "+"<<b <<"i"<< endl;
	}
	//成员函数实现函数重载
	Complex operator-(Complex&c2)
	{
		Complex tmp(this->a - c2.a, this->b - c2.b);
		return tmp;
	}
	 Complex& operator--( )
	 {
		 this->a--;
		 this->b--;
		 return*this;
	}
	 Complex operator--(int)
	 {
		 Complex tmp = *this;
		 this->a--;
		 this->b--;
		 return *this;
	 }

	~Complex() {}

private:
	int a;
	int b;
	friend Complex operator+(Complex&c1, Complex &c2);
	//friend Complex& operator++(Complex &c1);
	//friend Complex& operator++(Complex &c1, int);

	friend Complex operator++(Complex &c1);
	friend Complex operator++(Complex &c1, int);
};

//Complex& operator++(Complex &c1) {}
 //Complex& operator++(Complex &c1, int)
//{
//}
 //全局函数
 Complex operator+(Complex&c1,Complex &c2)
 {
	 Complex tmp(c1.a + c2.a, c1.b + c2.b);
	 return tmp;

 }
 //前置++
 Complex operator++(Complex &c1)
 {
	 c1.a++;
	 c1.b++;
	 return c1;
 }
 //后置++

 Complex operator++(Complex &c1, int)
 {
	 Complex tmp = c1;
	 c1.a++;
	 c1.b++;
	 return tmp;
 }

 void main()
 {
	 Complex c1(1, 2), c2(3, 4);
	 Complex c3 = c1 + c2;
	 c3.printCom();

	 Complex c4 = c1 - c2;
	 c4.printCom();
	 c1.printCom();
	 //--c1
	 --c1;
	 c1.printCom();
	 c1--;
	 c1.printCom();

	 system("pause");
 }