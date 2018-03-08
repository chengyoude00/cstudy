#include "myarry.h"


myarry::~myarry()
{
	if (m_space!=NULL)
	{
		delete[] m_space;
		m_space = NULL;
		m_length = -1;

	}
}

myarry::myarry(int length)
{
	if (length<0)
	{
		length = 0;
	}
	m_length = length;
	m_space = new int[m_length];

}
//¿½±´³ÉÔ±º¯Êý
myarry::myarry(const myarry &obj)
{
	this->m_length = obj.m_length;
	this->m_space = new int[obj.m_length];
	for (int i = 0; i <m_length; i++)
	{
		this->m_space[i] = obj.m_space[i];
		 
	}
}

void myarry::setdata(int index, int value)
{
	m_space[index] = value;

}
int myarry::getdata(int index)
{
	return m_space[index];
}
int myarry::length()
{
	return m_length;
}