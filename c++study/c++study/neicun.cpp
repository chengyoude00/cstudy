#include <iostream>
using namespace std;
int main()
{
	int *a[4];
	int i = 0;
	cout << "准备分配内存"<< endl;
	system("pause");
	for (int i = 0; i < 4; i++)
	{
		a[i] = new int[128 * 1024 * 1024];}
	cout << "内存分配成功"<< endl;
	cout << "准备释放内存"<< endl;
	for (; i >0; i--)
	{
		delete a[i - 1];}
	cout <<"内存已释放" << endl;
	return 0;

}