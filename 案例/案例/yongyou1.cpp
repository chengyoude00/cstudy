#include <iostream> 
#include"myclass.h"
using namespace std;

//class maxdata
//{
//
//public:
//	maxdata(int x, int y, int z) :a(x), b(y), c(z)
//	{
//	}
//	friend void putmax(maxdata &datamax)
//	{
//		if (datamax.a>=datamax.b&&datamax.a>=datamax.c)
//		{
//			cout << "���ֵΪ��"<<datamax.a << endl;}
//		else if (datamax.b>=datamax.a&&datamax.b>=datamax.c)
//		{
//			cout << "���ֵΪ��" << datamax.b << endl;}
//		else if (datamax.c>=datamax.a&&datamax.c>=datamax.b)
//		{
//			cout << "���ֵΪ��" << datamax.c << endl;
//
//		}
//		
//		
//
//	}
//
//private:
//	int a, b, c;
//
//};
//class mindata
//	{
//private:
//		int d, e, f;
//	public:
//		mindata(int x, int y, int z) :d(x), e(y), f(z)
//		{}
//		friend void putmin(mindata &datamin)
//		{
//			if (datamin.d >= datamin.f&&datamin.f>= datamin.f)
//			{
//				cout << "��СֵΪ��" << datamin.f << endl;
//			}
//			else if (datamin.d >= datamin.e&&datamin.f >= datamin.e)
//			{
//				cout << "���ֵΪ��" << datamin.e << endl;
//			}
//			else if (datamin.e >= datamin.d&&datamin.f >= datamin.d)
//			{
//				cout << "���ֵΪ��" << datamin.d << endl;
//
//			}
//		}
//
//	};





void main()
{
	int g, h, i;
	cout << "��������������";
	cin >>g >>h >>i ;
	maxdata m(g, h, i);
	mindata  n(g,h,i);
	putmax(m);
	putmin(n);
	system("pause");
}