#include<vector>
#include <iostream>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
	vector<int>data;
	vector<int>::iterator iter;
	cout <<"���������ݣ���-1��ʾ�����" << endl;
	int temp;
	do
	{
		cin >> temp;
		if (temp!=-1)
		{
			data.push_back(temp);

		}
	} while (temp!=-1);
	int cout8 = count(data.begin(),data.end(),8);
	cout << "һ��������"<< cout8<<"������8��"<< endl;
	replace(data.begin(),data.end(),8,5);
	cout << "������8�滻Ϊ����5֮��"<< endl;
	for ( iter = data.begin(); iter != data.end(); iter++)
	{
		cout.width(2);
		cout << *iter;}
	cout << endl;
	sort(data.begin(),data.end());
	cout << "����������֮��"<< endl;
	for ( iter = data.begin(); iter !=data.end(); iter++)
	{
		cout.width(2);
		cout << *iter;

	}
	cout << endl;
	sort(data.begin(), data.end());
	cout << "����������֮��"<< endl;
	for ( iter =data.begin(); iter !=data.end(); iter++)
	{
		cout.width(2);
		cout << *iter;

	}
	cout << endl;
	return 0;
}