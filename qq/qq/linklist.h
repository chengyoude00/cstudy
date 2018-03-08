#pragma once
#include "node.h"
#include <iostream>
using namespace std;
class Linklinst
{
public:
	Linklinst(int i, char c);
	Linklinst(Linklinst &l	);
	bool Locte(int i );
	bool Locte(char c);
	bool Insert(int i = 0,char c='0');
	bool Delete();
	void Show();
	void Destroy();
private:
	Node head;
	Node *pcurrent;


};


Linklinst::Linklinst(int i ,char c):head(i,c)
{
	cout << "Linklist constructor is running ..."<< endl;
	pcurrent = &head;
}

Linklinst::Linklinst(Linklinst &l):head(l.head)
{
	cout << "Linklist Deep cloner running ..."<< endl;
	pcurrent = &head;
	Node*pt1 = l.head.readn();
	while (pt1!=NULL)
	{
		Node *pt2 = new Node(pt1->readi(), pt1->readc(), pcurrent, NULL);
		pcurrent->setn(pt2);
		pcurrent = pcurrent->readn();
		pt1 = pt1->readn();

	}
}

inline bool Linklinst::Locte(int i)
{
	return false;
}

inline bool Linklinst::Locte(char c)
{
	return false;
}

inline bool Linklinst::Insert(int i, char c)
{
	return false;
}

inline bool Linklinst::Delete()
{
	return false;
}

inline void Linklinst::Show()
{
}

inline void Linklinst::Destroy()
{
}
