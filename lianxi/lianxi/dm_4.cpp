#include <iostream>
using namespace std;
class demo
{
public:
	double operator()(double x, double y)
	{
		return x > y ? x : y;
	}
	double operator() (double x, double y, double z)
	{
		return (x + y)*z;

	}
	
	


};
void main()
{
	demo de;
	cout << de(2.5, 0.2) << endl;
	cout << de(1.2,1.5,7.0)<< endl;

}
