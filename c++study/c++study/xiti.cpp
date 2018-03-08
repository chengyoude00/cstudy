#include <iostream>
using namespace std;
int main()
{
	int size;
	cin >> size;
	try
	{
		cout << "准备申请内存。。。"<< endl;
		if (size>512)
		{
			throw size;}
		char*cptr = new char[size * 1024 * 1024];
		cout <<"HAHA!" << endl;
		delete[]cptr;
	}
	catch (int a)
	{
		cout << "申请失败！容量为："<<a <<"M" << endl;
	
	}
	cout << "程序结束..." << endl;
	return 0;
}