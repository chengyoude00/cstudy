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
	cout << "�ռ䱻�ͷ��ˣ�"<< endl;
}
void main()
{
	float a, b, c;
	cout << "q���������ε��ϵס��µ׺͸ߣ�";
	cin >> a>> b>>c ;
	txdata t1(a, b, c);
	cout << "���ε������"<<t1.mj() << endl;
	system("pause");

}