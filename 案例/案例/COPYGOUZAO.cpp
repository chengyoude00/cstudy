#include <iostream>
#include <fstream>
#include "myfunc.h"
using namespace std;
class myfunc
{
public:
	void init(int a,int b)
	{
		m_a = a;
		m_b = b;
	}
	myfunc()
	{
		m_a = 0;
		m_b = 0;
		cout << "无参数"<< endl;
	}
	myfunc(int a)
	{
		m_a = a;
		m_b = 0;
		cout << "一个参数"<< endl;
	}


	myfunc(const myfunc  &obj)
	{
		m_a = obj.m_a;
		m_b = obj.m_b;
		cout << "拷贝函数"<< endl;
	}
	myfunc(int a, int b)
	{
		m_a = a;
		m_b = b;
		cout <<"有两个参数" << endl;
	}

	~myfunc()
	{
		//ofstream fp;
		//fp.open("xy.txt", ios::app);
		//fp << " ";
		cout << "析构函数" << endl;
		//fp.close();

	}

private:
	int m_a;
	int m_b;

};
myfunc yy()
{
	myfunc a(1, 5);
	cout << "nihao " << endl;
	return a;
}
void objdd()
{
	yy();
}

int main()





{
	int a=7, b=8;
	objdd();
	//myfunc t5;
	//t5.init(a,b );
	/*myfunc t0(2);
	myfunc t1;
	myfunc t2 = t1;
	myfunc t3(1, 2);
	t1 = t0;*/

	system("pause");
	return 0;
}
