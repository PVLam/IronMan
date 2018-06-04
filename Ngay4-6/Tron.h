#ifndef TRON_H
#define TRON_H
#include "Toado.h"
#include <math.h>

class Tron: public Toado
{protected:
	Toado I;
	float R;
public:
	Tron():I(),R(0){}
	Tron(float a, float b, float c):I(a,b),R(c){}
	void set(float a, float b, float c)
	{
		I.set(a,b);
		this->R = c;
	}
	float getR()const
	{
		return this->R;
	}
	Tron operator +(float n)
	{
		Tron kq;
		kq.set( getx(),gety(), getR()+n );
		return kq;
	}
	Tron operator -(float n)
	{
		Tron kq;
		kq.set( getx(),gety(), getR()-n );
		return kq;
	}
	bool operator >(Tron b)
	{
		if( getR()>b.getR() )
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool operator <(Tron b)
	{
		if( getR()<b.getR() )
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool giao(Toado A)
	{
		float a = I.getx()-A.getx();
		float b = I.gety()-A.gety();
		if ( sqrt(a*a+b*b)< getR() )
		{
			return true;
		}		
		else if( sqrt(a*a+b*b) == getR() )
		{
			return false;
		}
		else
		{
			return false;
		}
	}
	friend ostream &operator <<(ostream & out, const Tron &b)
	{
		out<<"Tam: ("<<b.I.getx()<<','<<b.I.gety()<<')'<<endl;
		out<<"Ban kinh: "<<b.getR();
		return out;
	}
	friend istream &operator >>(istream &in, Tron &b)
	{
		float x,y;
		cout<<"Toa do tam: "; in>>x>>y;
		b.I.set(x,y);
		cout<<"Ban kinh:"; in>>b.R;
		return in;   
	}
	~Tron(){}
};

#endif