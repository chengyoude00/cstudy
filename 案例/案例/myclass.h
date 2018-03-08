#pragma once
class maxdata
{

public:
	maxdata(int x, int y, int z);
	
	friend void putmax(maxdata &datamax);
private:
	int a, b, c;};
class mindata
{private:
	int d, e, f;
public:
	mindata(int x, int y, int z);
	
	friend void putmin(mindata &datamin);};
