#include <iostream>
using  namespace std;
class myfunc
{
public:
	myfunc(int m_a)
	{
		a = m_a;
		b=0;
	}
	void	GETG()
	{
		cout << a << endl;
		cout << b << endl;
	}

private:
	int  a, b;

};

int main()
{   
	
	myfunc t2(2);


	t2.GETG();
	return 0;
}