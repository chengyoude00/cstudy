//#include <iostream>
//using  namespace std;
// double x[7] = {-2.9999,-2.4486,-2.1599,-1.9893,-1.8687,-1.7734,-1.6990};
// double fx[7] = {4.32,5.02,5.39,5.26,5.10,4.84,4.76}  ;
//double Integral(int L, int R);
//double Integral(int L, int M, int R);

#include "2.h"
#include "1.cpp"
int main()
{
	int num, method = 0;
	cout << "数据点数：";
	cin >> num;
	cout << "输入0：梯形公式\n输入1：辛辛普森公式\n";
	cin >> method;
	double sum = 0;
	int Count = 0;
	switch (method)
	{
	case 0:
		for (int i = 0; i < num-1; i++)
		{
			sum += Integral(i,i+1);
			Count++;
			break;}
	case 1:
		for ( int  i = 0; i < num-1; i+=2)
		{
			sum += Integral(i, i + 1, i + 2);
			Count++;
			break;}

	default:
		cout << "输入错，退出"<< endl;
		break;
		system("pause");
		return  0;
	}
#define debug
#ifdef debug
	cout << "循环次数："<<Count<< endl;

#endif // debug
	cout << "数值分析："<<sum << endl;

	system("pause");
	return 0;
}
//double Integral(int L, int R)
//{
//	return 0.5*(x[R]-x[L])*(fx[L]+fx[R]);
//
//}
//double Integral(int L, int M, int R)
//{
//	return (x[R] - x[L])* (fx[L] + 4 * fx[M] + fx[R]) / 6;
//}