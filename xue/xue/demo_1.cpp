#include <iostream>
using namespace std;
class Animal
{
public:
	Animal(int w=0,int a=0);
	~Animal();
	void print();
	virtual void show();

protected:
	int weight, age;


};

Animal::Animal(int w, int a)
{
	cout << "���캯��"<< endl;
	weight = w;
	age = a;
}
Animal::~Animal()
{
	cout << "��������"<< endl;
}
void Animal::print()
{
	cout << "��ӡAnimal"<< endl;
}
void Animal::show()
{
	cout << "������ʾ"<< endl;
}
class cat:public Animal
{
public:
	void print();
	virtual void show();
	cat(int w = 0,int a=0);
	virtual ~cat();
};

cat::cat(int w,int a):Animal(w,a)
{
	cout << "cat ���캯��" << endl;
}


cat::~cat()
{
	cout << "cat��������"<< endl;
}
void cat::print()
{
	cout << "cat print"<< endl;

}
void cat::show()
{
	cout <<"cat show" << endl;
}
class persiancat:public cat
{
public:
	void print();
	void show();
	~persiancat();
	persiancat(int w,int a);


};
persiancat::persiancat(int w, int a):cat(w, a)
{
	cout <<"persiancat ���캯��" << endl;

}
persiancat::~persiancat()
{
	cout <<"persiancat���캯��" << endl;
}
void persiancat::print()
{
	cout << "persiancat��ӡ"<< endl;
}
void persiancat::show()
{
	cout <<"persiancat ��ʾ" << endl;
}
int main()
{
	Animal *pa = new cat(2, 4);
	cat *pc = new persiancat(4,6);
	pa->show();
	pa->print();
	pa->show();
	pa->print();
	cout <<"delete pa:" << endl;
	delete pa;
	cout <<"delete pc" << endl;
	delete pc;
}