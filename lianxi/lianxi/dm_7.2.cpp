#include <iostream>
using namespace std;
class complex
{
public:
	complex(double r = 0.0, double i = 0.0)
	{
		real = r;
		image = i;}
	
	friend complex operator+(const complex &, const complex&);
	
	friend complex operator-(const complex&, const complex&);
	
	friend complex operator*(const complex&, const complex&);


	friend complex operator/ (const complex&, const complex&);

	void disp()
	{
		cout << "("<< real<<","<<  image<< "i" <<")"<< endl;
	}


private:
	double real, image;

};
 complex operator+(const complex &c1, const complex&c2)
{
	return(complex(c1.real+c2.real,c1.image+c2.image));
}
 complex operator-(const complex&c1, const complex&c2)
 {
	 return(complex(c1.real-c2.real,c1.image-c2.image));
}
 complex operator*(const complex &c1, const complex &c2)
 {
	 return (complex(c1.real*c2.real-c2.image*c1.image, c1.real*c2.image+c1.image*c2.real));
}
 complex operator/ (const complex&c1, const complex&c2)
 {
	 return((c1.real*c2.real +c2.image+c1.image)/(c2.real*c2.real+c2.image*c2.image), (c2.real*c1.image -c2.image*c1.real)/ (c2.real*c2.real + c2.image*c2.image));
}
 void main()
 {
	 complex aa1(1.0, 2.0), aa2(3.0, 4.0), kk;
	 kk = aa1 + aa2;
	 kk.disp();
	 kk = aa1 -aa2;
	 kk.disp();
	 kk = aa1 * aa2;
	 kk.disp();
	 kk = aa1 / aa2;
	 kk.disp();
 }