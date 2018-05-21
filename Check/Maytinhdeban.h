#ifndef MAYTINHDEBAN_H
#define MAYTINHDEBAN_H
#include <string>
#include "Maytinh.h"

class Maytinhdeban: public Maytinh
{
private:
	Maytinh DB;
	/*bool Loaicase(bool a)
	{
		if(a == true)
		{
			return true;
		}
		else
		{
			return false;
		}
	}*/
public:
	Maytinhdeban(): DB(){}
	Maytinhdeban(string s, int a, int b, int c): DB(s,a,b,c){}
	Maytinhdeban(Date a, string s, bool loai): DB(a,s){}
	int getNamsx()const
	{
		return DB.getNamsx();
	}
	string getName()const
	{
		return DB.getName();
	}
};

#endif