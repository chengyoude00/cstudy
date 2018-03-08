#include <iostream>
using namespace std;
class txdata
{
public:
	txdata(float a,float b,float g):sd(a),xd(b),h(g)
	{

	}
	float mj()const
	{
		return (xd + sd)*h / 2;
	}
	~txdata();
	         
private:
	float sd, xd;
	const float h;
};


txdata::~txdata()
{
	cout << "空间被释放了！"<< endl;
}
void main()
{
	float a, b, c;
	cout << "q请输入梯形的上底、下底和高：";
	cin >> a>> b>>c ;
	txdata t1(a, b, c);
	cout << "梯形的面积："<<t1.mj() << endl;
	system("pause");

}