#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a("abc");
	string b("stringB");
	cout <<"length of a=" <<a.length() << endl;
	cout <<  a << endl;
	a.append("EFG");
	cout << "length of a=" << a.length() << endl;
	cout <<  a  << endl;
	a.insert(3,b);
	cout << a << endl;
	cout <<  a.compare(a) << endl;
	a.swap(b);
	cout <<"string a is" <<a <<endl<<"string b is"<<b << endl;

	return 0;
}