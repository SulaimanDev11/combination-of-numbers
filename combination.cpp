#include<iostream>
#include<windows.h>
using namespace std;
main()
{
	system("color 1E");
	int i,j,k,total=0;
	
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			for(k=1;k<=3;k++)
			{
				cout<<"("<<i<<","<<j<<","<<k<<")"<<" ";
				total++;
			}
		}
		cout<<endl<<endl;
	}
	cout<<"\nTotal combination of 1,2 and 3 are: "<<total;
	return 0;
}
