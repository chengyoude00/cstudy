#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
void Showlist(list<char>&llist);
int main()
{
	list<char>linklist;
	list<char>::iterator iter;
	cout << "�������ַ�������#������" << endl;
	char temp;
	do
	{
		cin >> temp;
		if (temp!='#')
		{
			linklist.push_back(temp);

		}
	} while (temp!='#');
	cout << "ԭʼ�ַ���Ϊ��"<< endl;
	Showlist(linklist);
	iter = find(linklist.begin(),linklist.end(),'h');
	linklist.insert(++iter,'c');
	cout <<"���ַ�h�������c��Ϊ��" << endl;
	Showlist(linklist);
	linklist.remove('t');
	cout << "ɾ���ַ�t��Ϊ��"<< endl;
	Showlist(linklist);
	linklist.clear();
	cout << "�б���պ�"<< endl;
	Showlist(linklist);

	return 0;
}
void Showlist(list<char>&llist)
{
	list<char>::iterator iter;
	if (llist.empty())
	{
		cout <<"���б���������Ԫ�ء�" << endl;
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