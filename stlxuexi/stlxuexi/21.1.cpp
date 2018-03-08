#include <vector>
#include <iterator>
#include <iostream>
using namespace std;
int main()
{
	vector<int> data;
	vector<int>::iterator iter, iter8;
	cout << "初始化数据..."<< endl;
	for (int i = 0; i < 10; i++)
	{
		data.push_back(i);}
	cout << "遍历读取中..."<< endl;
	for ( iter = data.begin(); iter!= data.end(); iter++)
	{
		cout.width(3);
		cout << *iter;
	if (*iter==8)
	{
		iter8 = iter;}
	}
	cout << endl << "向数据8前面插入99，结果为：" << endl;
	data.insert(iter8,99);
	for ( iter = data.begin(); iter !=data.end(); iter++)
	{
		cout.width(3);
		cout << *iter;}
	cout << endl;
	 

	return 0;



}