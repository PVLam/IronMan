#include "Date.h"
#include "Maytinh.h"
#include "Maytinhdeban.h"
#include "Maytinhxachtay.h"

using namespace std;

int main()
{
	Date d1(18,6,2014),d2(1,1,2014);
	cout<<d1<<';'<<d2<<endl;
	Maytinh m1(d1,"Dell"),m2(d2,"HP"); cout<<m1.getNamsx()<<endl;
	Maytinhdeban mb1(d1,"Dell",true);
	Maytinhxachtay mt1(d2,"Sony",2.2); cout<<mb1.getNamsx()<<endl;
	cout<<mt1.getNamsx()<<endl;
	cout<<mt1.getNamSD(2017)<<endl;
}