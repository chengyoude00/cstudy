#include <iostream>
#include <fstream>
using namespace std;
class sumdata
{
private:
	int k[3][5], sum[3];

public:
	 sumdata(int *p)
	{
		int i, j, s;
		for ( i = 0; i < 3; i++)
		{
			s = 0;
			for ( j = 0; j < 5; j++)
			{
				s += *p;
				p++;}
			sum[i] = s;
}
		//ÏÔÊ¾½á¹û
	/*	for (int m = 0;  m < 3; m++)
		{
			cout << sum[m] << endl;


		}*/
		////////////////////
	 }
	
	~sumdata()
	{
		ofstream fp;
		fp.open("QH.TXT",ios::out);
		int i;
		for ( i = 0; i < 3; i++)
		{   fp<<sum[i]<<' ';
			//fp.close();
			cout << "sum["<<i<<"]="<< sum[i]<< endl;

		}
		fp.close();
}
	
};

void main()
{
	int a[3][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int *p;
	p = &a[0][0];
	sumdata n(p);
	system("pause");
	//return 0;
}
