////#include <iostream>
////using namespace std;
////int main()
////{
////	char temp[256];
////	for (int i = 0; i < 2; i++)
////	{
////		cin.getline(temp,256);
////		cout << "�ղ�������ǣ�"<< temp<<endl;
////
////	}
////}
//#include<fstream>
//#include <iostream>
//using namespace std;
//int main()
//{
//	ifstream fin("E:\\data.txt");
//	ofstream fout("E:\\output.txt");
//	int temp, sum = 0;
//	while (!fin.eof())
//	{
//		fin >> temp;
//		sum = sum + temp;}
//	cout << sum<< endl;
//	return 0;
//}

#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "�����볤���εĳ��Ϳ�"<< endl;

	cin >>a >>b ;
	for (int i = 1; i <= b; i++)
	{
		for (int j = 1; j <=b; j++)
		{
			cout.width(10);
			cout << '*';

		}
		cout << endl;
	}
	return 0;
}