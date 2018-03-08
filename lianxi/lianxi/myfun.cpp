#include "myfun.h"
#include <iostream>
using namespace std;

complex complex::operator+(complex right)
	{
		complex temp;
		temp.real = this->real + right.real;
		temp.image = this->image + right.image;
		return temp;
	}
complex	complex ::operator=(complex right)
	{
		this->real = right.real;
		this->image = right.image;
		return*this;
	}
	void complex:: set_complex(float re, float im)
	{
		real = re;
		image = im;

	}
	void complex::put_complex(char *name)
	{
		cout << name << ":";
		cout << real << ' ';
		if (image > 0.0)
			cout << '+';
		cout << image << "i\n";
	}



private:
					float real;
					float image;


