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
		cout <<"���" << (sd + xd)*h / 2 << endl;
		return (sd+xd)*h/2;
	}
	//ͨ����ʼ���б���ֵ
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
	cout << "���������ε��ϵף�";
		cin >> a;
	cout << "���������ε��µף�";
	cin >> b;
	cout << "���������εĸߣ�";
	cin >> c;
	txdata(a, b, c)	;
	cout << "���ε������"<<txdata::area() << endl;
	float area();
	system("pause");
}