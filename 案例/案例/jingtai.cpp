#include <iostream>
using namespace std;
class counter
{
public:
	counter();
	~counter();
	static void change( )
	{
		for (int i = 0; i < 3; i++)
		{
			num += i;

		}
		cout <<num<< endl;
	}

private:
	static int num;


};

counter::counter()
{
}

counter::~counter()
{
}
int counter::num = 0;
void main()
{
	counter c1;
	c1.change();
	system("pause");
}