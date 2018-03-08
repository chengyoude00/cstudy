#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
void Showlist(list<char>&llist);
int main()
{
	list<char>linklist;
	list<char>::iterator iter;
	cout << "请输入字符串，以#结束：" << endl;
	char temp;
	do
	{
		cin >> temp;
		if (temp!='#')
		{
			linklist.push_back(temp);

		}
	} while (temp!='#');
	cout << "原始字符串为："<< endl;
	Showlist(linklist);
	iter = find(linklist.begin(),linklist.end(),'h');
	linklist.insert(++iter,'c');
	cout <<"在字符h后面插入c后为：" << endl;
	Showlist(linklist);
	linklist.remove('t');
	cout << "删除字符t后为："<< endl;
	Showlist(linklist);
	linklist.clear();
	cout << "列表清空后："<< endl;
	Showlist(linklist);

	return 0;
}
void Showlist(list<char>&llist)
{
	list<char>::iterator iter;
	if (llist.empty())
	{
		cout <<"请列表中无数据元素。" << endl;
		return;
	}
	else
	{
		for ( iter = llist.begin(); iter !=llist.end(); iter++)
		{
			cout << *iter;

		}
		cout << endl;
		return;
	}
}