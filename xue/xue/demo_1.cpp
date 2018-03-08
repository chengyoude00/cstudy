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
	cout << "构造函数"<< endl;
	weight = w;
	age = a;
}
Animal::~Animal()
{
	cout << "析构函数"<< endl;
}
void Animal::print()
{
	cout << "打印Animal"<< endl;
}
void Animal::show()
{
	cout << "函数显示"<< endl;
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
	cout << "cat 构造函数" << endl;
}


cat::~cat()
{
	cout << "cat析构函数"<< endl;
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
	cout <<"persiancat 构造函数" << endl;

}
persiancat::~persiancat()
{
	cout <<"persiancat构造函数" << endl;
}
void persiancat::print()
{
	cout << "persiancat打印"<< endl;
}
void persiancat::show()
{
	cout <<"persiancat 显示" << endl;
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