#include <iostream>
#include <string>
using namespace std;
class St
{
public:
	St()
	{
		p = NULL;
	}
	St(char *str="asnd")
	{
		p = str;
	}
	bool operator >(St&str1)
	{
		if (strcmp(str1.p, p) > 0)//比较两个字符串是否相同
		{	return true;
	}
		else
		{
			return false;
		}
	}
	bool operator<(St&str1)
	{
		if (strcmp(str1.p,p)<0)
		{
			return true;

		}
		else
		{
			return false;

		}
		

	}
	bool operator ==  (St&str1)
	{
		if (strcmp(str1.p,p)==0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	~St()
	{
		
	}

private:
	char *p;
		 
};
void main()
{
	//char*st1=0;"nihao"
	//char *st2=0;
	//char *st1 = 0;
	St string1(" "), string2(" ");
	//cin >> string1;
	//cout << (string1 > string2) << endl;
	//cout << (string1 < string2) << endl;
	//cout << (string1 == string2) << endl;
	//cout <<"请输入第一个字符串" <<endl ;
	////cin >>*st1;
	//cout << "请输入第一个字符串" << endl;
	//cin >> *st2;
	cout << (string1 > string2 )<< endl;
	cout << (string1 < string2) << endl;
	cout << (string1 == string2) << endl;


}