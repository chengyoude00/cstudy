#pragma once
class mychong
{
public:
	mychong(int x=0, int y=0);

	void printxy();
	
	~mychong();

	

private:
	int m_x;
	int m_y;
	friend mychong operator+(mychong &c1, mychong &c2);

};


