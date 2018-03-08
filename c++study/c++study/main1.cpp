#include "linklist.h"
#include <iostream>

using namespace std;
int main()
{
	int tempi;
	char tempc;
	cout << "输入一个整数和一个字符："<< endl;
	cin >> tempi>>tempc ;
	Linklist a(tempi , tempc);
	a.Show(tempi,tempc);

	return 0;

}