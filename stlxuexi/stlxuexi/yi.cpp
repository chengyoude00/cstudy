#include <iostream>
using namespace std;
double fx(double x)
{
	return x*x - x - 2;}
int main()
{
	const double eps = 1.e-5;
	double L, R, M;
	double fL, fM;
	int Count = 0;
	cout <<"单调区间左端点L：" << endl;
	cin >> L;
	cout << "单调区间右端点R：" << endl;//wode 

/*	cin >> R;
	cout << "fx(L)"<< fx(L)<<",fx(R)"<< fx(R) << endl;
	if (fx(L)*fx(R)>0)
	{
		cout << "非有解区间:\n";
		system("pause");
		return 0;}
	while (fabs(R-L)>eps)
	{
		cout <<++Count<<"次：" ;
		M = (L + R) / 2;
		fL = fx(L);
		fM = fx(M);
		if (fL*fM < 0)R = M;
		else if (fL*fM > 0)L = M;
		else break;
		cout <<L <<"x="<<M<<"\n函数值："<<fx(M)<<endl ;
	}

		system("puase");
		return 0;
}*/