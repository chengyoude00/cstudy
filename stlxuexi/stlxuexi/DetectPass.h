#/*pragma once
#include <string>
#include<iostream>
using namespace std;
enum PassStatus
{
	pass,failed,reject
};
class DetecPass
{
public:
	DetecPass();
	~DetecPass();
protected:
	int numOfRun;
	string getpass();


};*/

#include <string>
#include <iostream>
using namespace std;
enum PassStatus { pass, failed, reject };	//ö�����Ͷ�������״̬
class DetectPass
{
public:
	DetectPass();
	~DetectPass();
	PassStatus operator() (string passstr); 		//���Ų���������
protected:
	int numOfRun; 		//�ó�Ա���ݼ�¼��������Ĵ���
	string getpass();	//��ģ�⣩ͨ�����ݿ��ȡ����
};
