#include <iostream> 
using namespace std;
class student//定义学生类
{
private:       //私有成员
	char xh[5];//学号
	char xm[11];//姓名
	float cj;//成绩
//定义了两个公共的成员函数
public:
	//输入成员函数
	void inlist(class student &stu)
	{
		cout << "请输入学号：";
		cin >> stu.xh;
		cout << "请输入姓名：";
		cin >> stu.xm;
		cout << "请输入成绩：";
		cin >> stu.cj;}
//输出成员函数

	void outlist(student &stu)
	{
		cout << "stu.xh="<< stu.xh << endl;
		cout << "stu.xm="<< stu.xm << endl;
		cout << "stu.cj="<< stu.cj << endl;

	}

};


int main()
{
	student stu1 ,stu2;

	stu1.inlist(stu1);
	stu1.outlist(stu1);

	stu2.inlist(stu2);
	stu2.outlist(stu2);
 
	system("pause");
	return 0;
}