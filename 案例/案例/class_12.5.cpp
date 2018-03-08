#include <iostream>
#include <string>
#include <istream>
using namespace std;
class student1
{
public:
	string xh;
	string xm;
	float cj;
public:
	student1(string pxh, string  pxm, float pcj);
	


};

student1::student1(string pxh="234", string  pxm="uuyu", float pcj=99)
{
	xh = pxh;//学号
	xm = pxm;//姓名
	cj = pcj;//成绩
}
class student2
{
public:
	float wy;//外语成绩
	float zz;//政治成绩

public:
	student2(float pwy, float pzz);

};

student2::student2(float pwy,float pzz)
{
	wy = pwy;
	zz = pzz;
}



int main()
{
	string x;
	string m;
	float j;
	string oiti;
	cout << "请输入学号，姓名，成绩：";
	getline(cin,x);//字符串输入方法
	getline(cin,m);
	cin >> m;
	//getchar(m);
	cin >> j;
	student1 st1;
	//student1 st1(x,m,j);
	float k, o;
	cout << "请输入外语政治：";
	cin >> k>>o ;
student2 stu2(k, o);
cout <<"学号=" <<st1.xh << endl;
cout <<"姓名=" <<st1.xm << endl;
cout << "成绩=" << st1.cj << endl;
cout << "外语=" << stu2.wy << endl;
cout << "政治=" << stu2.zz << endl;


	system("pause");
	return 0;

}