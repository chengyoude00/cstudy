#include "DetectPass.h"
DetecPass::DetecPass()
{
	cout << "���캯��..."<< endl;
	numOfRun = 0;
}
DetecPass::~DetecPass()
{
	cout << "������������...."<< endl;

}
DetectPass::DetectPass()
{
}
DetectPass::~DetectPass()
{
}
PassStatus DetectPass::operator()(string passstr)
{
	cout << "���ǵ�"<<++numOfRun <<"����������" << endl;
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
//	cout <<"���캯������..." <<endl;
//	numOfRun=0;
//}
//DetectPass::~DetectPass()
//{
//	cout <<"������������..." <<endl;
//}
//PassStatus DetectPass::operator() (string passstr)
//{
//	cout <<"���ǵ�" <<++numOfRun <<"���������룬";
//	if (numOfRun<3)
//	{
//		if (passstr.compare(getpass())==0)
//		{
//			cout <<"������ȷ��" <<endl <<"��ӭ����ϵͳ��" <<endl;
//			return pass;
//		}
//		else
//		{
//			cout <<"�������" <<endl;
//			return failed;
//		}
//	}
//	else
//	{
//		cout <<"���Ѿ�����������Σ��쳣�˳���" <<endl;
//		return reject;
//	}
//}
//string DetectPass::getpass()
//{
//	return string("123456");
//}
