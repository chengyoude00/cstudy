#include <iostream>
using namespace std;
int main()
{
	int*a[4];
	int i = 0;
	cout << "׼�������ڴ�"<< endl;
	system("pause");
	try
	{ 
		for ( i = 0; i < 4; i++)
		{
			a[i] = new int[128 * 1024 * 1024];}}
	catch (bad_alloc)
	{
		cout << "�ڴ����ʧ�ܣ�"<< endl;
        cout << "׼���ͷ��ڴ棡" << endl;
		for (; i > 0; i--)
		{
			delete a[i - 1];}
		cout << "�ڴ����ͷţ�"<< endl;
		return 1;}
	cout << "�ڴ����ɹ�" << endl;
	cout << "׼���ͷ��ڴ�"<< endl;
	for (; i > 0; i--)
	{
		delete a[i - 1];	}
	cout << "�ڴ����ͷ�"<< endl;
	return 0;
}