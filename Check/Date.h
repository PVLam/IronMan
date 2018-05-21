#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;

class Date
{
private:
	int ngay,thang,nam;
public:
	Date():ngay(1),thang(1),nam(1){}
	Date(int a, int b, int c):ngay(a), thang(b), nam(c){}
	void set(int a, int b, int c)
	{
		this->ngay = a;
		this->thang = b;
		this->nam = c;
	}
	void Nhap()
	{
		int a,b,c;
		do
		{
			cout<<"Nhap ngay, thang, nam: "<<endl; cin>>a>>b>>c;
			set(a,b,c);
		}while(a<=0 || a>31 || b<=0 || b>12 || c<=0 ||(a>29 && b==2));
	}
	int getngay()const
	{
		return this->ngay;
	}
	int getthang()const
	{
		return this->thang;
	}
	int getnam()const
	{
		return this->nam;
	}
	friend ostream &operator <<(ostream & out, const Date &b)
	{
		out<<b.getngay()<<'-'<<b.getthang()<<'-'<<b.getnam();
	}
};
#endif