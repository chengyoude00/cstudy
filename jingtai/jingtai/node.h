#pragma once
class Node
{
public:
	Node();
	Node(Node &n);
	Node(int i ,char='0');
	Node(int i ,char c,Node *p,Node *n);
	~Node();
	static int  allocation();

private:
	int idata;
	char cdata;
	Node *prior;
	Node*next;
	static int count;

};

//Node::Node()
//{
//}
//
//inline Node::Node(Node & n)
//{
//}
//
//inline Node::Node(int i, char)
//{
//}
//
//inline Node::Node(int i, char c, Node * p, Node * n)
//{
//}
//
//Node::~Node()
//{
//}
//
//inline int Node::allocation()
//{
//	return 0;
//}
