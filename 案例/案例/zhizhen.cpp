#include <iostream>
#include <cstring>
#include <string.h>
using  namespace std;
class student
{
public:
	student(char x[],char y[],float z);
	float stu();
	~student();

private:
	char xh[5];
	char xm[10];
	float cj;


};

student::student(char x[], char y[], float z)
{
	strcpy_s(xh, x);
	strcpy_s(xm,y);
	cj = z;
}

student::~student()
{    
	cout << "��������"<< endl;
}
float student::stu()
{
	return cj;
}
int main()
{   
	student t1[3] = { student("1001","��ɺ",70),student("1002","�Ž�",90),student("1003","���",88)};
	int i, s=0;
	for ( i = 0; i < 3; i++)
	{
		s+= t1[i].stu();}
	cout << "s="<< s<< endl;
	//system("pause");
	
      return 0;
}

