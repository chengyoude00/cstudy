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
enum PassStatus { pass, failed, reject };	//枚举类型定义密码状态
class DetectPass
{
public:
	DetectPass();
	~DetectPass();
	PassStatus operator() (string passstr); 		//括号操作符重载
protected:
	int numOfRun; 		//用成员数据记录输入密码的次数
	string getpass();	//（模拟）通过数据库获取密码
};
