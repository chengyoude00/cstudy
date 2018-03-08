#include <iostream>
#include <fstream>
#include "class_12_6.h"
using namespace std;
class Maxdata
{
private:
	int a, b, c, zds;
	int y;
public:
	int max()
	{
		if (a >= b&&a >= c )zds = a;
		if (b >= a&&b >= c) zds = b;
		if (c >= a&&c >= b) zds = c;
		return zds;
	}
	Maxdata() :a(100), b(200),c(300)//初始化列表
	{}
	Maxdata(int x, int y, int z) :a(x), b(y), c(z)
	{
	}
	~Maxdata()
	{
		ofstream fp;
		fp.open("zds.txt",ios::app);
		fp << zds << "";
		fp.close();
	}

};

int main()
{
	int k1, k2, k3,k;
	 Maxdata n;
	k = n.max();
	cout <<"程序中初始值最大数为：" <<k << endl;
	cout << "请输入三个数：";
	cin >>k1 >>k2 >>k3 ;
	 Maxdata m(k1, k2, k3);
	k = m.max();
	cout << "程序中初始值最大数为：" << k << endl;

	system("pause");
	return 0;
}