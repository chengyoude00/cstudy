/* 汉诺塔问题解决 */
#include <iostream>
using namespace std;
void Hanoi(int n,char a,char b,char c);
void Move(char sour,char dest);
int main()
{
	
	int n;
	cout << "输入汉诺塔圆盘的个数:"<< endl;
	cin >> n;
	Hanoi(n,'A','B','C');
	cout <<"完成！"<< endl;
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
	cout << "把"<<sour <<"石柱最上面的圆盘移动到"<<dest<<"石柱上。" << endl;
}