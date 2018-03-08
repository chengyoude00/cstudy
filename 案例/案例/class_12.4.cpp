#include <iostream>
using namespace std;
class txdata
{
private:
	int h, sd, xd;
public:
	txdata(int = 10, int = 5, int = 20);
	float mj();};


txdata::txdata(int psd,int pxd,int ph)
{
	sd = psd;
	xd = pxd;
	h = ph;
}

float txdata::mj()
{
	return (sd + xd)*h / 2;
}

int main()
{
	txdata tx;
	cout << "梯形面积" << tx.mj() << endl;
	float m, n, z;
	cout << "请输入梯形的长，宽，高：";
	cin >> m >> n>>z ;
	//txdata tx2;
	txdata tx2(m,n,z);
	cout << "梯形面积2："<< tx2.mj()<< endl;
	//tx.xtdata();


	system("pause");
	return 0;
}