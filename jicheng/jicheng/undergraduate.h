#pragma once
#include "student.h"
class Undergraduate:public Student
{
public:
	double score();
	void setGPA(double g);
	bool isAdult();
protected:
	double GPA;};
double Undergraduate::score()
{
	return GPA;
}
void Undergraduate::setGPA(double g)
{
	GPA = g;
	return;
}
bool Undergraduate::isAdult()
{
	return age >= 18 ? true : false;
}