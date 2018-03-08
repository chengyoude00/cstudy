//#pragma once
#include <iostream>
using namespace std;
class Node
{
public:
	Node();
	Node(int i,char c='0');
	Node(int i, char c ,Node *p,Node *n);
	
	int readi() const;
	char readc() const;
private:
	int idata;
	char cdata;
	Node *prior;
	Node *next;
};

Node::Node()
{
	cout << "Node constructor is running ....." << endl;
	idata = 0;
	cdata = '0';
	prior = NULL;
	next = NULL;
}
Node::Node(int i, char c)
{
	cout <<"Node constructor running....." << endl;
	idata = i;
	cdata = c;
	prior = NULL;
	next = NULL;

}
Node::Node(int i, char c,Node *p,Node*n)
{
	cout << "Node constructor running....." << endl;
	idata = i;
	cdata = c;
	prior = p;
	next = n;

}

int Node::readi() const
{
	return 0;
}

 char Node::readc() const
{
	return 0;
}
