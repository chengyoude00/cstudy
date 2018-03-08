#include <iostream>
using namespace std;
#define _CRT_SECURE_NO_WARINGS
class myfunc
{
public:
	int a = 4;
	
protected:
	int b=3;
private:
	int c=9;

};
class my :protected myfunc
{};

}
class mychild :public myfunc
{
public:
	
private:

};

void main()
{
	mychild c1, c2;
	cout << c1.a <<endl ;
	cout << c1.b << endl;
}
