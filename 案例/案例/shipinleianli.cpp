#include <iostream>
using namespace std;
class mycube
{
public:
	int getabc(int a=2, int b=2, int c=3)//通过成员函数输入
	{
		 m_a=a;
		 m_b=b;
		 m_c=c;
		return m_a, m_b, m_c;

	}
	int geta()
	{
		return  m_a;
	}
	int getb()
	{
		return  m_b;
	}
	int getc()
	{
		return  m_c;
	}
	int cube_v()//直接通过成员函数进入直接使用//int cube_v(int a, int b, int c)

	{
		/*m_a = a;
		m_b = b;
		m_c = c;*/
		m_v = m_c*m_a*m_b;
		return m_v;
	}
	int cube_s()//int cube_s(int a, int b, int c)
	{
		 /*m_a=a;
		m_b=b;
		m_c=c;*/
		m_s =2*( m_a*m_b+m_a*m_c+m_b*m_c);
		return  m_s;
	}
	int jugdecube(mycube &v1)
	{
		if (m_a == v1.geta()&&m_b == v1.getb()&&m_c == v1.getc())
			return 1;
		else
			return  0;
	}
	mycube();
	~mycube();

private:
	int m_a;
	int m_b;
	int m_c;
	int m_v;
	int m_s;

};

mycube::mycube()
{
}

mycube::~mycube()
{
}
int main()
{
	mycube v1, v2;
	v1.getabc(1, 2, 3);
	//v2.getabc(2, 2, 3);
	  v2.getabc(2,3,5);
	  

	v2.jugdecube(v1);
	cout << v2.cube_s()<<endl;
	cout << v2.cube_v()<<endl;
	cout << v1.cube_s() << endl;
	cout << v1.cube_v() << endl;

	if (v2.jugdecube(v1)==1)
	{
		cout << "大小相等" << endl;

	}
	else
	{
		cout <<"不相等" << endl;
	}
	//cout << v2.jugdecube(v1)<<endl;
	system("pause");
	return 0;
}