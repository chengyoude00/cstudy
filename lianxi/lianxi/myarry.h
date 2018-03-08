#pragma once
#include <iostream>
using namespace std;
class myarry
{
public:
	myarry(int length);
	myarry(const myarry &obj);
	~myarry();
	int 	length();
	void setdata(int index, int value);
	int getdata(int index);
private:
	int m_length;
	int *m_space;
};

