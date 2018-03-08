#include "linklist.h"
#include <iostream>
using namespace std;
int main()
{
	int tempi;
	char tempc;
	cout << "请输入一个整数和一个字符："<< endl;
	cin >> tempi >> tempc;
	Linklinst a(tempi,tempc);
	a.Locte(tempi);
	a.Insert(1,'C');
	a.Insert(2,'B');

	a.Insert(3, 'F');
	cout << "After Insert"<< endl;
	a.Show();
	a.Locte('B');
	a.Delete();
	cout << "After Delete"<< endl;
	a.Show();
	Linklinst b(a);
	cout << "This is Linklist b"<< endl;
	a.Show();
	a.Destroy();

	cout << "After Destory"<< endl;
	a.Show();
	cout <<"This is Linklist b" << endl;
	b.Show();
	return 0;
}