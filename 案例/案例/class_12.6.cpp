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
	Maxdata() :a(100), b(200),c(300)//��ʼ���б�
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
	cout <<"�����г�ʼֵ�����Ϊ��" <<k << endl;
	cout << "��������������";
	cin >>k1 >>k2 >>k3 ;
	 Maxdata m(k1, k2, k3);
	k = m.max();
	cout << "�����г�ʼֵ�����Ϊ��" << k << endl;

	system("pause");
	return 0;
}