#include<iostream>
using namespace std;
class Student
{
public:
	Student(char *n, int a, int h, int w);
	void set(char *n, int a, int h, int w);
	 ~Student();
	 virtual void study();
	 //virtual
protected:
	char name[10];                                                            
	int age;
	int height;
	int weight;

};

Student::Student(char *n, int a, int h, int w)
{
	cout << "constructing a student with parameter ...����" << endl;
	set(n, a, h, w);
}
void Student::set(char *n, int a, int h, int w)///û�н�������
{
	return  ;
}
void  Student::study()
{
	cout << "ѧϰ"<< endl;
}
;
Student::~Student()
{
	cout << "Destructing a Student object...����" << endl;
}
class Undergraduate: public Student
{
public:
	double score();
	void setGPA(double g);
	bool isAdult();
	 void study();//�麯��virtual
	Undergraduate(char *n, int a, int h, int w);
	~Undergraduate();

private:
	double GPA;

};
double Undergraduate::score()
{
	return 9;
}
void Undergraduate::setGPA(double g)
{
	return;
}
bool Undergraduate::isAdult()
{
	return age >= 18 ? true : false;
}
void  Undergraduate::study()//�麯��
{
	cout << "ѧϰ�ߵ���ѧ�ʹ�ѧӢ��" << endl;
}
Undergraduate::Undergraduate(char *n, int a, int h, int w) :Student(n, a, h, w)
{
	cout << "constructing an undergraduate with parameter...����" << endl;
}
Undergraduate::~Undergraduate()
{
	cout << "destructing an undergraduate object...����" << endl;
}
int main()
{
	Student *  sp = new  Undergraduate("jon", 22, 185, 68);
	//Student c1("nihaoi", 5, 8, 9);
	//Undergraduate *s1;
	
	sp->study();
	delete sp; 
	return 0;
}