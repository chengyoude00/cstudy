#include <iostream>
using namespace std;
class student
{private:
	char xh[5];
	char xm[11];
	float cj;
public:    //���ⶨ�庯��
	//�����Ա����
	void  inlist(student &stu);
	//�����Ա����
	void outlist(student &stu);

};

void  student::inlist(student &stu)
//�����Ա����
{
	cout << "������ѧ�ţ�";
	cin >> stu.xh;
	cout << "������������";
	cin >>stu.xm ;
	cout << "������ɼ���";
	cin >> stu.cj;
}
void student::outlist(student &stu)
//�����Ա����
{
	cout <<"stu.xh=" << stu.xh<< endl;
    cout <<"stu.xm=" << stu.xm << endl;
	cout << "stu.cj="<< stu.cj << endl;
	

}
int main()
{
	student st1,st2;
	st1.inlist(st1);
	st1.outlist(st1);
	st2.inlist(st2);
	st2.outlist(st2);
	system("pause");
	return 0;

}