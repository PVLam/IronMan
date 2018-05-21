#ifndef MAYTINHXACHTAY_H
#define MAYTINHXACHTAY_H
#include "Maytinh.h"

class Maytinhxachtay: public Maytinh
{
private:
	Maytinh XT;
	float CanNang;
public:
	Maytinhxachtay():XT(), CanNang(0){}
	Maytinhxachtay(string s, int a, int b, int c, float k):XT(s,a,b,c), CanNang(k){}
	Maytinhxachtay(Date a, string s, float k):XT(a,s), CanNang(k){}
	float getCan()const
	{
		return this->CanNang;
	}
	int getNamsx()const
	{
		return XT.getNamsx();
	}
	int getNamSD(int a)const
	{
		return a - XT.getNamsx();
	}
};

#endif