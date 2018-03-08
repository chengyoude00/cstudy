#include<iostream>
using namespace std;
class Student
{
public:
	Student(char *n,int a,int h,int w);
	void set(char *n, int a, int h, int w);
	virtual ~Student();

protected:
	char name[10];
	int age;
	int height;
	int weight;

};

Student::Student(char *n, int a, int h, int w)
{
	cout << "constructing a student with parameter ..."<< endl;
	set(n, a, h, w);
}
void Student:: set(char *n, int a, int h, int w)///没有进行设置
{
	return;
}
Student::~Student()
{
	cout << "Destructing a Student object..."<< endl;
}
class Undergraduate:public Student
{
public:
	double score();
	void setGPA(double g);
	bool isAdult();
	virtual void study();//虚函数
	Undergraduate(char *n,int a,int h,int w);
	~Undergraduate();

private:
	double GPA;

};
double Undergraduate::score()//没有设置
{
	return;
}
void Undergraduate:: setGPA(double g)
{
	return;
}
bool Undergraduate:: isAdult()
{
	return age >= 18 ? true : false;
}
void  Undergraduate::study()//虚函数
{
	cout << "学习高等数学和大学英语"<< endl;
}
Undergraduate::Undergraduate(char *n, int a, int h, int w):Student(n,a,h,w)
{
	cout << "constructing an undergraduate with parameter..."<< endl;
}
Undergraduate::~Undergraduate()
{
	cout << "destructing an undergraduate object..."<< endl;
}
int main()
{
	Student *sp = new Undergraduate("jon",22,185,68);
	sp->study();
	delete sp;
	return 0;
}