#include <iostream>
using namespace std;
int main()
{
	int a;
	char b;
	double c;
	try
	{
		cin >> a;
		if (a==0)
		{throw a;}
		cin >> b;
		if (b=='A')
		{
			throw b;		}
		cin >> c;
		if (c==3.0)
		{
			throw c;	}}
	
	catch (int it)
	{
		cout <<"�����쳣" << it<< endl;}
	catch (char ct)
	{
		cout <<"�ַ��쳣"<<ct << endl;
	}
	cout <<"End" << endl;
	return 0;

}