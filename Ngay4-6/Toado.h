#ifndef TOADO_H
#define TOADO_H
#include <iostream>
using namespace std;

class Toado
{
protected:
	float x;
	float y;
public:
	Toado():x(0),y(0){}
	Toado(float a, float b):x(a),y(b){}
	void set(float a, float b)
	{
		this->x = a;
		this->y = b;
	}
	float getx()const
	{
		return this->x;
	}
	float gety()const
	{
		return this->y;
	}
	~Toado(){}
};
#endif