#include <iostream>
using namespace std;
class Node								//����һ����������
{
public:
	Node();								//���캯��������
	Node(int i, char c = '0');				//���캯������1
	Node(int i, char c, Node *p, Node *n);	//���캯������2
	Node(Node &n);						//��㿽�����캯����&��ʾ����
	int readi() const;					//��ȡidata
	char readc() const;					//��ȡcdata
	Node * readp() const;				//��ȡ��һ������λ��
	Node * readn() const;				//��ȡ��һ������λ��
	bool set(int i);					//���أ�ͨ���ú����޸�idata
	bool set(char c);					//���أ�ͨ���ú����޸�cdata
	bool setp(Node *p);					//ͨ���ú�������ǰ�����
	bool setn(Node *n);					//ͨ���ú������ú�̽��
private:
	int idata;
	char cdata;
	Node *prior;
	Node *next;
};
int Node::readi() const					//��Ա����readi�Ķ���
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
bool Node::set(int i)					//���س�Ա��������
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
Node::Node(int i, char c)					//���캯������1 
{
	cout << "Node constructor is running..." << endl;
	idata = i;
	cdata = c;
	prior = NULL;
	next = NULL;
}
Node::Node(int i, char c, Node *p, Node *n)	//���캯������2
{
	cout << "Node constructor is running..." << endl;
	idata = i;
	cdata = c;
	prior = p;
	next = n;
}
Node::Node(Node &n) 			//�������캯��
{
	idata = n.idata;				//���Զ���ͬ������˽�г�Ա����
	cdata = n.cdata;
	prior = n.prior;
	next = n.next;
}
