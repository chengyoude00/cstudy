#include "node.h"
#include<iostream>
using namespace std;
int Node::count = 0;
Node::Node()
{
	cout << "Node constructor is running..."<< endl;
	count++;
	idata = 0;
	cdata = '0';
	prior = NULL;
	next = NULL;

}
Node::Node(int i, char c)
{
	cout << "Node constructor is running..."<< endl;
	count++;
	idata = i;
	cdata = c;
	prior = NULL;
	next = NULL;

}
Node::Node(int i, char c, Node *p, Node*n)
{
	cout <<"Node constructor is running..." << endl;
	count++;
	idata = i;
	cdata = c;
	prior = p;
	next = n;
}
Node::Node(Node &n)
{
	count++;
	idata = n.idata;
	cdata = n.cdata;
	prior = n.prior;
	next = n.next;

}
Node::~Node()
{
	count--;
	cout <<"Node destructor is running... " << endl;

}
int Node::allocation()
{
	return count;
}
