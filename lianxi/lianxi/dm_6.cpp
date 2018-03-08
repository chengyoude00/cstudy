#include <iostream>
using namespace std;
class charsz
{
public:
	charsz(int l) 
	{
		len = l;
		pbuf = new char[len];
	}

	~charsz()
	{
		delete pbuf;
	}

	int getlen()
	{
		//cout <<len ;
		return len;
	}
	char &operator[](int i)
	{
		static char def = '\0';
		if (i<len&&i>=0)
		{
			return pbuf[i];}
		else
		{
			cout << "下标越界"<< endl;
			return pbuf[i];
		}

	}
private:
	int len;
	char *pbuf;

};


int main()
{
	int cnt = 0;
	charsz de(7);
	char *sz = "hello";
	for (; cnt < strlen(sz)+1; cnt++)
	{
		de[cnt] = sz[cnt];}
	for (cnt = 0; cnt < de.getlen(); cnt++)
	{
		cout << de[cnt];
	}
	cout << endl;

	

	system("pause");
	return 0;
}