#include "linklist.h"
#include <iostream>

using namespace std;
int main()
{
	int tempi;
	char tempc;
	cout << "����һ��������һ���ַ���"<< endl;
	cin >> tempi>>tempc ;
	Linklist a(tempi , tempc);
	a.Show(tempi,tempc);

	return 0;

}