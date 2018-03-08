#pragma once
#include "node.h"						//��Ҫʹ����������
#include <iostream>
using namespace std;
class Linklist
{
public:
	Linklist(int i, char c);			//�����๹�캯��
	Linklist(Linklist &l);			//����������캯��
	~Linklist();					//������������
	bool Locate(int i);				//�����������ҽ��
	bool Locate(char c);			//�����ַ����ҽ��
	bool Insert(int i = 0, char c = '0');//�ڵ�ǰ���֮�������
	bool Delete();					//ɾ����ǰ���
	void Show();					//��ʾ������������
	void Destroy();					//�����������
private:
	Node head;						//ͷ���
	Node * pcurrent;				//��ǰ���ָ��
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
	Destroy();				//����Destory�����ͷ���Դ 
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
		Node * temp = new Node(i, c, pcurrent, pcurrent->readn());	//����
		if (pcurrent->readn() != NULL)
		{
			pcurrent->readn()->setp(temp);						//���
		}
		pcurrent->setn(temp);									//���
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
			temp->readn()->setp(pcurrent->readp());			//����
		}
		temp->readp()->setn(pcurrent->readn());				//����
		pcurrent = temp->readp();
		delete temp;										//���
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
	while (ptemp1 != NULL)		//��һɾ��������
	{
		Node * ptemp2 = ptemp1->readn();
		delete ptemp1;
		ptemp1 = ptemp2;
	}
	head.setn(NULL);
}
