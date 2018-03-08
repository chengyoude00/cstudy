#include <iostream>
#include <ctime>
using namespace std;
const int MAX = 200;
char Key[MAX];
void bitcode(char src[],char obj[],int len)//加密、解密算法
{
	for (int i = 0; i < len; i++)
	{
		obj[i] = src[i] ^ Key[i];//异或
		obj[len] = 0;}
}
int makekeKey(int len)//生成秘钥
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
	char srcstr[] = {0};//{"how are you !"};//原文
	char objstr[23];//密文
	cout << "请输入需要加密的字符串：";
	cin >> srcstr;
	int length = strlen(srcstr);
	srand(time(NULL));//设置随机种子
	makekeKey(length);
	//char x = makekeKey(length);
	bitcode(srcstr,objstr,length);//加密
	cout << "密文："<<objstr << endl;
	bitcode(objstr,srcstr,length);//解密
	cout << "原文："<<srcstr << endl;
	cout << "字符串大小" << strlen(srcstr) << endl;
	cout<<
	system("pause");
	return 0;
}