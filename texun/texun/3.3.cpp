#include <iostream>
#include <iomanip>
using namespace std;
double polynomial(double a[], int n, double x)
{
	double result = a[n];
	for (int k= n; k >=1;)
	{
		result = result*x + a[--k];	}
	return  result;
}
int main()
{
	double a[7] = {-15,-7,7,2,-3,7,3};
	double x[6] = {-2,-0.5,1,2,3.7,4};
	double result;
	cout <<left <<showpos<< endl;
	for (int i = 0; i < 6; i++)
	{
		result = polynomial(a, 6, x[i]);
		cout << "x=" << setw(4) << fixed << setprecision(2) << x[i] << ":" << endl;
		cout <<"f(x)=" <<scientific <<setprecision(4) <<result << endl;
	}

	system("pause");
	return  0;
}