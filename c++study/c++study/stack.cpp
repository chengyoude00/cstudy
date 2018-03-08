#include <iostream>
using namespace std;
void stack(char c);
int main()
{
	char d[50];
	cin>>d;
	stack(d[50]);
	cout << endl;
	return 0;}
void stack(char c)
{
	if ( c!='\0')
	{
		char d;
		cin >> d;
		stack(d);
		cout << c;
		return ;
	}
	else
	{return;}
}