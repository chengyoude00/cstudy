#include "linklist.h"
#include <iostream>
using namespace std;
int main()
{
	int tempi;
	char tempc;
	cout <<"请输入一个整数和一个字符："  << endl;
	cin >>tempi >>tempc ;
	Linklist a(tempi,tempc);
	a.Locate(tempi);
	a.Insert(1,'c');
	a.Insert(2,'b');
	a.Insert(3, 'f');
	cout << "After insert"<< endl;
	a.Show();
	a.Locate('b');
	a.Delete();
	cout << "After Delete" << endl;
	a.Show();
	Linklist b(a);
	cout << "This is Linklist b" << endl;
	b.Show();
	b.Destory();
	cout << "After Destory" << endl;
	a.Show();

	return 0;
}
