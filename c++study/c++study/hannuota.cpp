/* ��ŵ�������� */
#include <iostream>
using namespace std;
void Hanoi(int n,char a,char b,char c);
void Move(char sour,char dest);
int main()
{
	
	int n;
	cout << "���뺺ŵ��Բ�̵ĸ���:"<< endl;
	cin >> n;
	Hanoi(n,'A','B','C');
	cout <<"��ɣ�"<< endl;
	return 0;
}
void Hanoi(int n, char a, char b, char c)
{
	int x = 1;
	int y=1;
	if (n==1)
	{Move(a, c);}
	else
	{
		y++;
		Hanoi(n - 1, a, c, b);
		Move(a,c);
		Hanoi(n-1,b,a,c);}
	cout << "y=" << y << endl;
	cout<<"x="<<x++<<endl;


}

void Move(char sour, char dest)
{
	cout << "��"<<sour <<"ʯ���������Բ���ƶ���"<<dest<<"ʯ���ϡ�" << endl;
}