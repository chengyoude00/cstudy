#include<vector>
#include <iostream>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
	vector<int>data;
	vector<int>::iterator iter;
	cout <<"请输入数据，以-1表示结果：" << endl;
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
	cout << "一共输入了"<< cout8<<"次数字8。"<< endl;
	replace(data.begin(),data.end(),8,5);
	cout << "将数字8替换为数字5之后："<< endl;
	for ( iter = data.begin(); iter != data.end(); iter++)
	{
		cout.width(2);
		cout << *iter;}
	cout << endl;
	sort(data.begin(),data.end());
	cout << "将数字排序之后："<< endl;
	for ( iter = data.begin(); iter !=data.end(); iter++)
	{
		cout.width(2);
		cout << *iter;

	}
	cout << endl;
	sort(data.begin(), data.end());
	cout << "将数字排序之后："<< endl;
	for ( iter =data.begin(); iter !=data.end(); iter++)
	{
		cout.width(2);
		cout << *iter;

	}
	cout << endl;
	return 0;
}