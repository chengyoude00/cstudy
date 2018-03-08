#include <iostream>
using namespace std;
class student
{private:
	char xh[5];
	char xm[11];
	float cj;
public:    //类外定义函数
	//输入成员函数
	void  inlist(student &stu);
	//输出成员函数
	void outlist(student &stu);

};

void  student::inlist(student &stu)
//输入成员函数
{
	cout << "请输入学号：";
	cin >> stu.xh;
	cout << "请输入姓名：";
	cin >>stu.xm ;
	cout << "请输入成绩：";
	cin >> stu.cj;
}
void student::outlist(student &stu)
//输出成员函数
{
	cout <<"stu.xh=" << stu.xh<< endl;
    cout <<"stu.xm=" << stu.xm << endl;
	cout << "stu.cj="<< stu.cj << endl;
	

}
int main()
{
	student st1,st2;
	st1.inlist(st1);
	st1.outlist(st1);
	st2.inlist(st2);
	st2.outlist(st2);
	system("pause");
	return 0;

}