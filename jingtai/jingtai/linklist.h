#pragma once
#include "node.h"						//需要使用链表结点类
#include <iostream>
using namespace std;
class Linklist
{
public:
	Linklist(int i, char c);			//链表类构造函数
	Linklist(Linklist &l);			//链表深拷贝构造函数
	~Linklist();					//链表析构函数
	bool Locate(int i);				//根据整数查找结点
	bool Locate(char c);			//根据字符查找结点
	bool Insert(int i = 0, char c = '0');//在当前结点之后插入结点
	bool Delete();					//删除当前结点
	void Show();					//显示链表所有数据
	void Destroy();					//清除整个链表
private:
	Node head;						//头结点
	Node * pcurrent;				//当前结点指针
};
Linklist::Linklist(int i, char c) :head(i, c)
{
	cout << "Linklist constructor is running..." << endl;
	pcurrent = &head;
}
Linklist::Linklist(Linklist &l) : head(l.head)
{
	cout << "Linklist Deep cloner running..." << endl;
	pcurrent = &head;
	Node * ptemp1 = l.head.readn();
	while (ptemp1 != NULL)
	{
		Node * ptemp2 = new Node(ptemp1->readi(), ptemp1->readc(), pcurrent, NULL);
		pcurrent->setn(ptemp2);
		pcurrent = pcurrent->readn();
		ptemp1 = ptemp1->readn();
	}
}

Linklist::~Linklist()
{
	cout << "Linklist destructor is running..." << endl;
	Destroy();				//调用Destory函数释放资源 
}
bool Linklist::Locate(int i)
{
	Node * ptemp = &head;
	while (ptemp != NULL)
	{
		if (ptemp->readi() == i)
		{
			pcurrent = ptemp;
			return true;
		}
		ptemp = ptemp->readn();
	}
	return false;
}
bool Linklist::Locate(char c)
{
	Node * ptemp = &head;
	while (ptemp != NULL)
	{
		if (ptemp->readc() == c)
		{
			pcurrent = ptemp;
			return true;
		}
		ptemp = ptemp->readn();
	}
	return false;
}
bool Linklist::Insert(int i, char c)
{
	if (pcurrent != NULL)
	{
		Node * temp = new Node(i, c, pcurrent, pcurrent->readn());	//先连
		if (pcurrent->readn() != NULL)
		{
			pcurrent->readn()->setp(temp);						//后断
		}
		pcurrent->setn(temp);									//后断
		return true;
	}
	else
	{
		return false;
	}
}
bool Linklist::Delete()
{
	if (pcurrent != NULL && pcurrent != &head)
	{
		Node * temp = pcurrent;
		if (temp->readn() != NULL)
		{
			temp->readn()->setp(pcurrent->readp());			//先连
		}
		temp->readp()->setn(pcurrent->readn());				//先连
		pcurrent = temp->readp();
		delete temp;										//后断
		return true;
	}
	else
	{
		return false;
	}
}
void Linklist::Show()
{
	Node * ptemp = &head;
	while (ptemp != NULL)
	{
		cout << ptemp->readi() << '\t' << ptemp->readc() << endl;
		ptemp = ptemp->readn();
	}
}void Linklist::Destroy()
{
	Node * ptemp1 = head.readn();
	while (ptemp1 != NULL)		//逐一删除结点对象
	{
		Node * ptemp2 = ptemp1->readn();
		delete ptemp1;
		ptemp1 = ptemp2;
	}
	head.setn(NULL);
}
