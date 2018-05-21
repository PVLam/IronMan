#ifndef MAYTINH_H
#define MAYTINH_H
#include "Date.h"
class Maytinh: public Date
{
private:
	string Name;
	Date sx;
public:
	Maytinh():Name(""), sx(){}
	Maytinh(string s, int a, int b, int c):Name(s),sx(a,b,c){}
	Maytinh(Date a, string s): sx(a), Name(s){}
	int getngaysx()const
	{
		return sx.getngay();
	}
	int getthangsx()const
	{
		return sx.getthang();
	}
	int getNamsx()const
	{
		return sx.getnam();
	}
	string getName()const
	{
		return this->Name;
	}
};


#endif