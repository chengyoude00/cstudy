#include <iostream>
using namespace std;
class Node								//定义一个链表结点类
{
public:
	Node();								//构造函数的声明
	Node(int i, char c = '0');				//构造函数重载1
	Node(int i, char c, Node *p, Node *n);	//构造函数重载2
	Node(Node &n);						//结点拷贝构造函数，&表示引用
	int readi() const;					//读取idata
	char readc() const;					//读取cdata
	Node * readp() const;				//读取上一个结点的位置
	Node * readn() const;				//读取下一个结点的位置
	bool set(int i);					//重载，通过该函数修改idata
	bool set(char c);					//重载，通过该函数修改cdata
	bool setp(Node *p);					//通过该函数设置前驱结点
	bool setn(Node *n);					//通过该函数设置后继结点
private:
	int idata;
	char cdata;
	Node *prior;
	Node *next;
};
int Node::readi() const					//成员函数readi的定义
{
	return idata;
}
char Node::readc() const
{
	return cdata;
}
Node * Node::readp() const
{
	return prior;
}
Node * Node::readn() const
{
	return next;
}
bool Node::set(int i)					//重载成员函数定义
{
	idata = i;
	return true;
}
bool Node::set(char c)
{
	cdata = c;
	return true;
}
bool Node::setp(Node *p)
{
	prior = p;
	return true;
}
bool Node::setn(Node *n)
{
	next = n;
	return true;
}
Node::Node()
{
	cout << "Node constructor is running..." << endl;
	idata = 0;
	cdata = '0';
	prior = NULL;
	next = NULL;
}
Node::Node(int i, char c)					//构造函数重载1 
{
	cout << "Node constructor is running..." << endl;
	idata = i;
	cdata = c;
	prior = NULL;
	next = NULL;
}
Node::Node(int i, char c, Node *p, Node *n)	//构造函数重载2
{
	cout << "Node constructor is running..." << endl;
	idata = i;
	cdata = c;
	prior = p;
	next = n;
}
Node::Node(Node &n) 			//拷贝构造函数
{
	idata = n.idata;				//可以读出同类对象的私有成员数据
	cdata = n.cdata;
	prior = n.prior;
	next = n.next;
}
