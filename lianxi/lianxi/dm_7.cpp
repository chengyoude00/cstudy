#include <iostream>
using namespace std;
#include "myfun.h"
//class complex
//{
//public:
//	complex operator+(complex right)
//	{
//		complex temp;
//		temp.real = this->real + right.real;
//			temp.image = this->image + right.image;
//			return temp;
//	}
//	complex operator=(complex right)
//	{
//		this->real = right.real;
//		this->image = right.image;
//		return*this;
//	}
//	void set_complex(float re,float im)
//	{
//		real = re;
//		image = im;
//
//	}
//	void put_complex(char *name)
//	{
//		cout <<name <<":" ;
//		cout << real<<' ' ;
//		if (image > 0.0)
//			cout << '+';
//		cout << image<<"i\n" ;
//	}
//
//	
//
//private:
//	float real;
//	float image;
//
//};


void main()
{
	complex A, B, C;
	A.set_complex(1.2, 0.3);
	B.set_complex(-0.5,-0.8);
	A.put_complex("A");
	B.put_complex("B");
	C = A;
	C.put_complex("C=A");
	C = A + B;
	C.put_complex("C=A+B");
	return;
}