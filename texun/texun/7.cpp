#include <iostream>
#include <ctime>
using namespace std;
const int MAX = 200;
char Key[MAX];
void bitcode(char src[],char obj[],int len)//���ܡ������㷨
{
	for (int i = 0; i < len; i++)
	{
		obj[i] = src[i] ^ Key[i];//���
		obj[len] = 0;}
}
int makekeKey(int len)//������Կ
{
	for (int i = 0; i < len; i++)
	{
		Key[i] = rand() % 10 + '0';
		cout << Key[i];
}
	return 0;
}
int main()
{
	char srcstr[] = {0};//{"how are you !"};//ԭ��
	char objstr[23];//����
	cout << "��������Ҫ���ܵ��ַ�����";
	cin >> srcstr;
	int length = strlen(srcstr);
	srand(time(NULL));//�����������
	makekeKey(length);
	//char x = makekeKey(length);
	bitcode(srcstr,objstr,length);//����
	cout << "���ģ�"<<objstr << endl;
	bitcode(objstr,srcstr,length);//����
	cout << "ԭ�ģ�"<<srcstr << endl;
	cout << "�ַ�����С" << strlen(srcstr) << endl;
	cout<<
	system("pause");
	return 0;
}