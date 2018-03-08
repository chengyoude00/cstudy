#pragma once
#include "node.h"
#include <iostream>
using namespace std;
class Linklist
{
public:
	Linklist(int i, char c);
	Linklist(Linklist &l);
	bool Locate(int i);
	bool Locate(char c);
	bool Insert(int i=0,char c='0');
	bool Delete();
	void Show();
	void Destory();
private:
	Node head;
	Node *pcurrent;};


Linklist::Linklist(int i,char c):head(i,c)
{
	cout << "Linstlink construct is running..........."<< endl;
	pcurrent = &head;
}

Linklist::Linklist(Linklist &l):head(l.head)
{
	cout << "Linstlink cloner is running..........." << endl;
	pcurrent = l.pcurrent;
}

inline bool Linklist::Locate(int i)
{
	return false;
}

inline bool Linklist::Locate(char c)
{
	return false;
}

inline bool Linklist::Insert(int i, char c)
{
	return false;
}

inline bool Linklist::Delete()
{
	return false;
}

inline void Linklist::Show()
{
}

inline void Linklist::Destory()
{
}
