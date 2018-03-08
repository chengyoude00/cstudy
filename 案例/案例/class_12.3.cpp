#include <iostream>
using namespace std;
class data
{
private:
	int a, b, c;
public:
	//³ÉÔ±º¯Êı
	int max( )
	{
		if (a>=b&&a>=c)return a;
		if (b >= a&&b >= c) return b;
		if (c >= a&&c >= b)  return c;
	}
	 data()
	{
		a = 100;
		b = 200;
		c = 300;
	}


};


int main3()
{
	class data n;
	int m;
	m = n.max();
	cout << "m="<<m << endl;

	system("pause");
	return 0;
}