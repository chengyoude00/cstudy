#include <vector>
#include <iterator>
#include <iostream>
using namespace std;
int main()
{
	vector<int> data;
	vector<int>::iterator iter, iter8;
	cout << "��ʼ������..."<< endl;
	for (int i = 0; i < 10; i++)
	{
		data.push_back(i);}
	cout << "������ȡ��..."<< endl;
	for ( iter = data.begin(); iter!= data.end(); iter++)
	{
		cout.width(3);
		cout << *iter;
	if (*iter==8)
	{
		iter8 = iter;}
	}
	cout << endl << "������8ǰ�����99�����Ϊ��" << endl;
	data.insert(iter8,99);
	for ( iter = data.begin(); iter !=data.end(); iter++)
	{
		cout.width(3);
		cout << *iter;}
	cout << endl;
	 

	return 0;



}