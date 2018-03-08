#include "mychong.h"
#include <iostream>
using namespace std;


 mychong::mychong(int x, int y)
{
	//m_x = x;
	//m_y = y;
	 this->m_x = x;
	 this->m_y = y;
}


 void  mychong::printxy()
 {
	 cout << m_x<<"+"<<m_y<<"i"<< endl;
 }

 mychong operator+(mychong &c1, mychong &c2) 
 {
	 cout << "已经使用"<< endl;
	 mychong c3(c1.m_x+c2.m_x, c1.m_y + c2.m_y);
	 
	 return c3;
 }


mychong::~mychong()
{
}


