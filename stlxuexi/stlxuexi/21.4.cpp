#include <iostream>
#include <algorithm>
#include<set>
#include <iterator>
#include <string>
#include <fstream>
using namespace std;
int main()
{
	set<string>studentA, studentB;
	ostream_iterator<string>out(cout,"");
	set<string>::iterator iter;
	studentA.insert("���ݽṹ");
	studentA.insert("����ϵͳ");
	studentA.insert("�����߼�");
	studentA.insert("�ߵ���ѧ");
	studentA.insert("��ѧ����");
	studentA.insert("���Դ���");
	studentA.insert("�����߼�");
	studentB.insert("���ݽṹ");
	studentB.insert("�ߵ���ѧ");
	studentB.insert("���Դ���");
	studentB.insert("��ѧӢ��");
	studentB.insert("���ݽṹ");
	cout << "����ѡ���Ŀγ̰�����"<< endl;
	set_union(studentA.begin(),studentA.end() ,studentB.begin(),studentB.end(),out);
	cout << endl;
	cout << "��ͬѡ���Ŀγ̰�����"<< endl;
	set_intersection(studentA.begin(), studentA.end(), studentB.begin(), studentB.end(), out);
    cout << endl;
	ofstream fout("E:\c++\cstudy\stlxuexi\stlxuexi\\output.txt");
	cout <<"ѧ��Aѡ�ˣ�"<<studentA.size()<<"�ſ�" << endl;
	cout << "ѧ��Bѡ�ˣ�" << studentB.size() << "�ſ�" << endl;
	cout << endl;
	return 0;

}