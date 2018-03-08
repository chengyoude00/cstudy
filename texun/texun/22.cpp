#include <iostream>
using  namespace std;

 /*int y()
 {
	 const int a = 5;
	 return a;
}*/
int const  a = 10;

#define a 100
//#undef a
	

 //int y()
 //{
	// printf("x\n", a);
 //
	// return a;
 //}

int main()
{
	//int a=2;
	 int  b = a;
	 printf("&a:%d \n ",b);

	 printf("b:%d \n ", a);

	system("pause");
	return 0;
}