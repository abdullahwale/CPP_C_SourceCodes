#include<iostream>
using namespace std;
main()
{
int m1[2][2];

	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"enter value for matrix 01";
			cin>>m1[i][j];
		}
		cout<<endl;
	}

	cout<<"\nMatrix 01\n";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<m1[i][j]<<"\t";
		}
		cout<<endl;
	}
int m2[2][2]={23,14,14,15};
	cout<<"\nMatrix 02\n";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<m2[i][j]<<"\t";
		}
		cout<<endl;
	}
int m3[2][2];
	cout<<"\nMatrix 03\n";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			
			m3[i][j]=m2[i][j]+m1[i][j];
			cout<<m3[i][j]<<"\t";
		}
		cout<<endl;
	}		
}
