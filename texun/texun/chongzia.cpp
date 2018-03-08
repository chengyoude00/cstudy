#include <iostream>
using namespace std;
void myfunc(int a)
{
	printf("a:%d", a);

}

void myfunc(int *p)
{
	printf("*p:%d",*p);
}
void myfunc(char m, char n)
{
	printf("m:%s",m);
}
typedef void(*mytypefunc)(int a);
int main()
{
	mytypefunc fp;
	fp = myfunc;
	fp(9);
	system("pause");
	return 0;
}