#include <iostream>
using namespace std;
class txdata
{
public:
	/*float init()
	{
		sd = 0;
		xd = 0;
		h = 0;
	}*/
	static float area()
	{
		cout <<"面积" << (sd + xd)*h / 2 << endl;
		return (sd+xd)*h/2;
	}
	//通过初始化列表赋初值
	//txdata(int r, int n, int m) :s(r), y(n), l(m)
	//{
	//}
	txdata(float a=0, float b=0, float c=0)
	{
		sd = a;
		xd = b;
		h = c;

	}
	
	~txdata();

private:
	static float sd, xd, h;
	//int s, y, l;

};
float txdata::sd = 0;
float txdata::xd = 0;
float txdata::h = 0;
txdata::~txdata()
{
}
void main()
{
	float a, b, c;
	cout << "请输入梯形的上底：";
		cin >> a;
	cout << "请输入梯形的下底：";
	cin >> b;
	cout << "请输入梯形的高：";
	cin >> c;
	txdata(a, b, c)	;
	cout << "梯形的面积："<<txdata::area() << endl;
	float area();
	system("pause");
}