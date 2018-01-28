#include <iostream>
using namespace std;
int main()
{
int year;
cin>>year;
if (year%4==0)
{ cout<<"nam nhuan"<<endl;}
else
{cout<<"khong phai nam nhuan"<<endl;}
if (year%100==0)
{if ((year%900==200)||(year%900==600))
cout<<"nam nhuan"<<endl;
else{cout<<"khong phai nam nhuan"<<endl;}}

return 0;}



