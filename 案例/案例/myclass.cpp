#include "myclass.h"
#include <iostream>
using namespace std;


	maxdata::maxdata(int x, int y, int z) :a(x), b(y), c(z)
	{
	}
	void 	putmax(maxdata &datamax)
	{
		if (datamax.a >= datamax.b&&datamax.a >= datamax.c)
		{
			cout << "最大值为：" << datamax.a << endl;
		}
		else if (datamax.b >= datamax.a&&datamax.b >= datamax.c)
		{
			cout << "最大值为：" << datamax.b << endl;
		}
		else if (datamax.c >= datamax.a&&datamax.c >= datamax.b)
		{
			cout << "最大值为：" << datamax.c << endl;

		}



	}


	mindata::mindata(int x, int y, int z) :d(x), e(y), f(z)
	{}
 void putmin(mindata &datamin)
	{
		if (datamin.d >= datamin.f&&datamin.f >= datamin.f)
		{
			cout << "最小值为：" << datamin.f << endl;
		}
		else if (datamin.d >= datamin.e&&datamin.f >= datamin.e)
		{
			cout << "最大值为：" << datamin.e << endl;
		}
		else if (datamin.e >= datamin.d&&datamin.f >= datamin.d)
		{
			cout << "最大值为：" << datamin.d << endl;

		}
	}

 