#pragma once
#include <iostream>
using namespace std;
class Student
{
public:
	Student(char *n,int a ,int h,int w);
	Student();
	void set(char *n,int a,int h,int w);
	char *sname();
	int sage();
	int sheight();
	int sweight();
protected:
	char name[10];
	int age;//年龄
	int height;//身高
	int weight;//体重
private:
	int test;


};

char *Student::sname()
{
	return name;

}

int Student::sage()
{
	return age;

}

int Student::sheight()
{
	return height;

}
int Student::sweight()
{
	return weight;

}
void Student::set(char *n,int a,int h,int w)
{
	int i;
	for ( i = 0; n[i] !='\0' ; i++)
	{
		name[i] = n[i];	}
	name[i] = '\0';
	age = a;
	height = h;
	weight = w;
	return;
}

Student::Student(char *n,int a,int h,int w)
{
	cout << "constructing a student with parameter...."<< endl;
	set(n,a,h,w);}
Student::Student()
{
	cout << "constructing a student without parameter..."<< endl;
}
