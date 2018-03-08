//#pragma once
#include "node.h"
#include <iostream>
using namespace std;
class Linklist
{
public:
	Linklist(int i,char c);
	bool Locate(int a);
	bool Insert(int i = 0,char c='0');
	bool Delete();
	static  void Show(int i,char c);
	void Destory();
private:
	Node head;
	Node *pcurrent;

};

Linklist::Linklist(int i,char c):head(i,c)
{
	cout << "Linklist constructor is running ....." << endl;
	pcurrent = &head;
}



bool Linklist::Locate(int a)
{
	return false;
}

 bool Linklist::Insert(int i, char c)
{
	return false;
}
 bool Linklist::Delete()
 {
	 return false;
 }

 void Linklist::Show(int i,char c)
 {
	 cout << i << endl;
	 cout << c << endl;
 }


void Linklist::Destory()
{
}