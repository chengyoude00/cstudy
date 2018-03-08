#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
	Student(int num2,string name2,string sex2,int age2)
	{
		num = num2;
		name = name2;
		sex = sex2;
		age = age2;
	}
	void display()
	{
		cout << "学号："<<num << endl;
		cout <<"姓名：" <<name << endl;
		cout << "性别："<< sex<<  endl;
		cout << "年龄："<<age << endl;
	}

	
private:
	int num;
	string name;
	string sex;
	int age;

};

class Gradute:public Student
{
public:
	Gradute(int num2,string name2,string sex2 ,int age2 ,string direction2 ):Student(num2,name2,sex2,age2)

	{
		direction = direction2;

	}
	void show()
	{
		display();
		cout << "研究方向："<<direction << endl;
	}

private:
	string direction;

};
void main()
{
	Gradute g1(2013,"张珊", "男", 19, "计算机应用");

		g1.show();
}