#include "Toado.h"
#include "Tron.h"
#include <fstream> 

int main()
{
	Tron a[5];
	for(int i=0; i<5;i++)
	{
		cin>>a[i];
	}
	Tron m;
	for(int i = 0; i<5; i++)
	{
		for(int j = 0; j<5;j++)
		{
			if( a[i].getR()<a[j].getR() )
			{
				m = a[j];
			}
		}
	}
	cout<<"Hinh tron lon nhat: "<<endl;
	cout<<m<<endl;
	fstream fin("DuLieuToaDo.txt", ios::in);
    Toado A[4];
    int N;
    fin>>N;
    for(int i = 0; i<4; i++)
    {
    	float a,b;
    	fin>>a>>b;
    	A[i].set(a,b);
    }
    cout<<endl<<endl;
    cout<<"Cac toa do giao voi hinh tron lon nhat la: "<<endl;
    for(int i = 1; i<=4;i++)
    {
    	if( m.giao(A[i]) ) 
    	{
    		cout<<"Toa do: ("<<A[i].getx()<<','<<A[i].gety()<<')'<<endl;
    	}
    }


}