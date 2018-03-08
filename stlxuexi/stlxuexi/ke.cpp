#include <iostream>
using  namespace std;
class Mycircle
{
public:
	double r;
	double pi = 3.14;
	double s = pi *r*r;
	double get_s()
	{
		s = pi*r*r;
		return s;
	}
};
void mac()
{
	const int b = 10;
#define a 5
//#undef a;
}
//void mv()
//{
//	printf("b=%d",  b);
//}

//void fun1()
//{
//#define a 10
//	const int b = 20;
//	//#undef a  # undef
//}



void fun2()
{
	printf("a = %d\n", a);
	//printf("b = %d\n", b);
}

int  main()
{
	

	//int a;
	const int b = 10;
	int c;
	/*Mycircle s1;
	cout << "输入s1的半径："<< endl;
	cin >> s1.r;
	cout <<"s1的面积：" <<s1.s<< endl;

	cout << "s1的面积：" << s1.get_s() << endl;
*/

	//
	//cout << b << endl;
	//cout << a << endl;
	//cout << c << endl;
	printf("a:%d\n,b:%d\n",a,b);

	//printf("&b:%d,&a:%d,&c:%d",&b, &a, &c);
	//return 0;
	system("pause");
}

