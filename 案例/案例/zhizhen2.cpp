//#include <iostream>
//using namespace std;
//class student
//{
//public:
//
//	float sumstu(  student &st2, student &st3) 
//	{
//
//		return cj + st2.cj + st3.cj;
//	}
//	student(char m_xh[], char m_xm[], float m_cj)
//	{
//		strcpy_s( xh, m_xh);
//		strcpy_s(xm, m_xm);
//
//		/*xh = m_xh[];
//		xm[10] = m_xm[];*/
//		cj = m_cj;
//
//	}
//	~student();
//
//private:
//	char xh[10];
//	char xm[10];
//	float cj;
//
//		 
//};
//
//
//
//student::~student()
//{
//}
//int main()
//{
//	//student stu1(), stu2(), stu3();
//	char xhl[10], xml[10];
//	float cjl;
//	char s[3];
//
//		cout << "�������һ��ѧ����ѧ�ţ��������ɼ���" << endl;
//		cin >> xhl >> xml >> cjl;
//		student sy1(xhl, xml, cjl);
//
//		cout << "������ڶ���ѧ����ѧ�ţ��������ɼ���" << endl;
//		cin >> xhl >> xml >> cjl;
//		student sy2(xhl, xml, cjl);
//		cout << "�����������ѧ����ѧ�ţ��������ɼ���" << endl;
//		cin >> xhl >> xml >> cjl;
//		student sy3(xhl, xml, cjl);
//		cout <<"����ѧ���ĳɼ��ͣ�"<<sy1.sumstu(sy2, sy3)<<endl;
//	
//
//
//	system("pause");
//	return 0;
//}
#include <iostream>
using namespace std;
class student
{
public:
	char xh[5];
	char xm[10];
	float cj;
public:

	student(char pxh[],char pxm[],float pcj);

	//~student();

private:

};

void main()
{
	student stu[3] = {student("1001","��ɺ",80),student("1009","����",80), student("1009","����",80)};
	student *p;
	int i, sum = 0;
	p = &stu[0];
	for ( i = 0; i < 3; i++)
	{
		cout <<"ѧ��="<<(*(p+i)).xh << endl;
		cout << "����=" << (*(p + i)).xm << endl;
		cout << "�ɼ�=" << (*(p + i)).cj << endl;
		sum+=(*(p + i)).cj;
	}
	cout <<"�ܳɼ���" <<sum << endl;
	system("pause");
}
student::student(char pxh[], char pxm[], float pcj)
{
	strcpy_s(xh, pxh);
	strcpy_s(xm, pxm);
	cj = pcj;

}


