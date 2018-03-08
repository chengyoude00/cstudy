#include <string>
#include <iostream>
using namespace std;
int main()
{
	string a("abc");
	cout << "pos 'b='" << a.find("b") << endl;
	cout << "length of a="<<a.length()<< endl;
	cout << a<< endl;
	string b("abcdefg");
	cout << "pos\"cd\"=" << b.find("cd") << endl;
	cout <<"length of b=" <<b.length() << endl;
	cout << b<< endl;
	return 0;
}