#include <iostream>
using namespace std;
int main()
{
	int size;
	cin >> size;
	try
	{
		cout << "׼�������ڴ档����"<< endl;
		if (size>512)
		{
			throw size;}
		char*cptr = new char[size * 1024 * 1024];
		cout <<"HAHA!" << endl;
		delete[]cptr;
	}
	catch (int a)
	{
		cout << "����ʧ�ܣ�����Ϊ��"<<a <<"M" << endl;
	
	}
	cout << "�������..." << endl;
	return 0;
}