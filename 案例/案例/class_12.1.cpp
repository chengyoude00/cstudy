#include <iostream> 
using namespace std;
class student//����ѧ����
{
private:       //˽�г�Ա
	char xh[5];//ѧ��
	char xm[11];//����
	float cj;//�ɼ�
//���������������ĳ�Ա����
public:
	//�����Ա����
	void inlist(class student &stu)
	{
		cout << "������ѧ�ţ�";
		cin >> stu.xh;
		cout << "������������";
		cin >> stu.xm;
		cout << "������ɼ���";
		cin >> stu.cj;}
//�����Ա����

	void outlist(student &stu)
	{
		cout << "stu.xh="<< stu.xh << endl;
		cout << "stu.xm="<< stu.xm << endl;
		cout << "stu.cj="<< stu.cj << endl;

	}

};


int main()
{
	student stu1 ,stu2;

	stu1.inlist(stu1);
	stu1.outlist(stu1);

	stu2.inlist(stu2);
	stu2.outlist(stu2);
 
	system("pause");
	return 0;
}