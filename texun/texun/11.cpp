#include <iostream>
using  namespace std;
int main()
{
	 int b = 18;
	int &a = b;
	const int&w = 0;
	printf("&w:%d\n",w)
		;

	printf("aa:%d", &w);
	system("pause");
	return 0;
}