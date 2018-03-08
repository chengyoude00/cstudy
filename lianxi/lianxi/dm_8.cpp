#include <iostream>
using namespace std;
class Complex
{
public:
	Complex(double px,double py)
	{
		x = px;
		y = py;
	}
	friend ostream&operator<<(ostream&out, Complex&c1)
	{
		//out << "(" << c1.x << "," << c1.y << ")";
		cout << "("<< c1.x<< ","<<c1.y << ")";
		return out;
	}

private:
	double x, y;
};
void main()
{
	Complex a1(6, 3);
	cout <<"a1:" << a1<< endl;
	return;
}