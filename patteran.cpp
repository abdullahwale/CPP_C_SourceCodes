#include<iostream>
using namespace std;
main()
{
	//1,2,3,,111,112
	cout<<"Possible Combinations!\n";
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++)
		{
			for(int k=1;k<=3;k++)
			{
				//cout<<"IJK\t";
				cout<<i<<j<<k<<"\t";
			}
		}
		cout<<endl;
	}
}
