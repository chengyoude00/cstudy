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
		cout << "ѧ�ţ�"<<num << endl;
		cout <<"������" <<name << endl;
		cout << "�Ա�"<< sex<<  endl;
		cout << "���䣺"<<age << endl;
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
		cout << "�о�����"<<direction << endl;
	}

private:
	string direction;

};
void main()
{
	Gradute g1(2013,"��ɺ", "��", 19, "�����Ӧ��");

		g1.show();
}