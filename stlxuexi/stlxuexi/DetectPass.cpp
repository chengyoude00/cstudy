#include "DetectPass.h"
DetecPass::DetecPass()
{
	cout << "构造函数..."<< endl;
	numOfRun = 0;
}
DetecPass::~DetecPass()
{
	cout << "析构函数对象...."<< endl;

}
DetectPass::DetectPass()
{
}
DetectPass::~DetectPass()
{
}
PassStatus DetectPass::operator()(string passstr)
{
	cout << "这是第"<<++numOfRun <<"次输入密码" << endl;
	if (numOfRun<3)
	{

	}
}

string DetectPass::getpass()
{
	return string();
}

//#include "DetectPass.h"
//DetectPass::DetectPass()
//{
//	cout <<"构造函数对象..." <<endl;
//	numOfRun=0;
//}
//DetectPass::~DetectPass()
//{
//	cout <<"析构函数对象..." <<endl;
//}
//PassStatus DetectPass::operator() (string passstr)
//{
//	cout <<"这是第" <<++numOfRun <<"次输入密码，";
//	if (numOfRun<3)
//	{
//		if (passstr.compare(getpass())==0)
//		{
//			cout <<"密码正确。" <<endl <<"欢迎进入系统！" <<endl;
//			return pass;
//		}
//		else
//		{
//			cout <<"密码错误！" <<endl;
//			return failed;
//		}
//	}
//	else
//	{
//		cout <<"您已经输错密码三次！异常退出！" <<endl;
//		return reject;
//	}
//}
//string DetectPass::getpass()
//{
//	return string("123456");
//}
