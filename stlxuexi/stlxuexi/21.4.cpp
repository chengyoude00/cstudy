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
	studentA.insert("数据结构");
	studentA.insert("操作系统");
	studentA.insert("数字逻辑");
	studentA.insert("高等数学");
	studentA.insert("大学物理");
	studentA.insert("线性代数");
	studentA.insert("数字逻辑");
	studentB.insert("数据结构");
	studentB.insert("高等数学");
	studentB.insert("线性代数");
	studentB.insert("大学英语");
	studentB.insert("数据结构");
	cout << "所有选过的课程包括："<< endl;
	set_union(studentA.begin(),studentA.end() ,studentB.begin(),studentB.end(),out);
	cout << endl;
	cout << "共同选过的课程包括："<< endl;
	set_intersection(studentA.begin(), studentA.end(), studentB.begin(), studentB.end(), out);
    cout << endl;
	ofstream fout("E:\c++\cstudy\stlxuexi\stlxuexi\\output.txt");
	cout <<"学生A选了："<<studentA.size()<<"门课" << endl;
	cout << "学生B选了：" << studentB.size() << "门课" << endl;
	cout << endl;
	return 0;

}