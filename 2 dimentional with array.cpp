#include<iostream>
using namespace std;
main()
{
	int matrix[2][2];
	cout<<"Two Dimentions";
    for(int i=0;i<2;i++)
    {
    	for(int j=0;j<2;j++)
    	{
           cin>>matrix[i][j];		
		}
	}
	cout<<"\n2-Dim Array\n";
	for(int i=0;i<2;i++)
    {
    	for(int j=0;j<2;j++)
    	{
         cout<<matrix[i][j]<<"\t";		
		}
		cout<<endl;
	}
	
}
