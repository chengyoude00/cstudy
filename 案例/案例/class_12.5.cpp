#include <iostream>
#include <string>
#include <istream>
using namespace std;
class student1
{
public:
	string xh;
	string xm;
	float cj;
public:
	student1(string pxh, string  pxm, float pcj);
	


};

student1::student1(string pxh="234", string  pxm="uuyu", float pcj=99)
{
	xh = pxh;//ѧ��
	xm = pxm;//����
	cj = pcj;//�ɼ�
}
class student2
{
public:
	float wy;//����ɼ�
	float zz;//���γɼ�

public:
	student2(float pwy, float pzz);

};

student2::student2(float pwy,float pzz)
{
	wy = pwy;
	zz = pzz;
}



int main()
{
	string x;
	string m;
	float j;
	string oiti;
	cout << "������ѧ�ţ��������ɼ���";
	getline(cin,x);//�ַ������뷽��
	getline(cin,m);
	cin >> m;
	//getchar(m);
	cin >> j;
	student1 st1;
	//student1 st1(x,m,j);
	float k, o;
	cout << "�������������Σ�";
	cin >> k>>o ;
student2 stu2(k, o);
cout <<"ѧ��=" <<st1.xh << endl;
cout <<"����=" <<st1.xm << endl;
cout << "�ɼ�=" << st1.cj << endl;
cout << "����=" << stu2.wy << endl;
cout << "����=" << stu2.zz << endl;


	system("pause");
	return 0;

}