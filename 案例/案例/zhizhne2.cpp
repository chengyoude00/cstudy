#include <iostream>
#include <istream>
using namespace std;
class txdata
{
private:
	float a, b, h;
public:
	void txin(txdata &tx);
	float txmj(  txdata &tx);
	/*float get(txdata &tx)
		{
		a = tx.a;
		b = tx.b;

	}*/
	/*txdata(int a=2);
	~txdata();*/



};
//
//txdata::txdata(int a)
//{
//}
//
//txdata::~txdata()
//{
//	cout <<  "析构函数" << endl;
//}


void main()
{//定义数组对象
	//txdata t1;
	txdata tx[3];
	float s[3];
	int i;
	
	for ( i = 0; i < 3; i++)
	{
		tx[i].txin(tx[i]);
		
		s[i]=tx[i].txmj(tx[i]);
		//s[i] = tx[i].txmj[tx[i]];
		cout << "s["<<i<<"]="<<s[i]<< endl;

	}

	//system("pause");
}

float txdata::txmj(txdata &tx)
{
	//cout << (a + b)*h / 2 << endl;
	return (a + b)*h / 2;
}
void txdata::txin(class  txdata &tx)
{
	cout << "请输入上底a:";
	cin >> tx.a;
	cout << "请输入下底b:";
	cin >> tx.b;

	cout << "请输入下底高:";
	cin >> tx.h;

}
