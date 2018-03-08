#include <iostream>
#include "myarry.h"
using namespace std;
void main()
{
	myarry a1(10);
	for (int  i = 0; i <a1.length(); i++)
	{
		a1.setdata(i, i);
	}
	cout << "打印数组a1:"<< endl;
	for (int i = 0; i < a1.length(); i++)
	{
		cout << a1.getdata(i)<<" ";

	}
	cout << endl;

	/////a2
	myarry a3(1);
	myarry a2 = a1;
	a3 = a1;

	cout << "d打印数组2：";
		for (int  i = 0; i < a2.length(); i++)
		{
			cout << a2.getdata(i) << " ";

		}
		cout << endl;
		system("pause");
}