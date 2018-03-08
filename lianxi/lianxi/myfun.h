#pragma once
#include <iostream>
using namespace std;
class complex
{
public:
	complex operator+(complex right);
	
	complex operator=(complex right);

	void set_complex(float re, float im);
	

	void put_complex(char *name);
	



private:
	float real;
	float image;

};

class my
{
public:
	my& operator=(const char *p)
	{
		if (m_p != NULL)
		{
			delete[] m_p;
			m_len = 0;
		}
		if (p ==NULL )
		{
			m_len = 0;
			m_p = new char[m_len + 1];
			strcpy(m_p, " ");
		}
		else
		{
		m_len = strlen(p);
		m_p = new char[m_len + 1];
		strcpy(m_p,p);	
	}					
		return *this;	
	}

private:
											char *p;
											int m_len;
											char *m_p;

	
	

};

my::my()
{
}

my::~my()
{
}

