#include <iostream> 
using namespace std;
#include "mychong.h"
void  main()
{
	//1
	//////////////����1
	//�򵥵������������
	int a = 0, b = 0;
	int c;
	c = a + b;
	cout <<"c=" <<c << endl;
	///////////
//2 
	mychong c3;
     ///a+bi ��������
		mychong c1(2, 3), c2(3, 4);
		c3 = c1 + c2;

		c3.printxy();

	system("pause");
}