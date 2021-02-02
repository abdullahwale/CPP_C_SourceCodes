#include<iostream>
using namespace std;
main()
{            // 0   1  2 3  4
	int arr[5]={10,30,15,25,5};
	int temp;
	//
	
	for(int i=0;i<5;i++)//i==0
	{
		for(int j=0;j<4;j++)//j=2
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
			cout<<"Pass"<<arr[j+1]<<endl;
			cout<<temp<<endl;
		}
		
	}
	
	
	//
	cout<<"\nSorted Array\n";
	for(int i=0;i<5;i++)
	cout<<arr[i]<<"\t";
}
