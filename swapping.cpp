#include<iostream>
using namespace std;
main()
{
	int arr[5];
	cout<<"Please enter Five Values: "<<endl;
	for(int i=0;i<=4;i++)
	{
		cout<<"Enter Value "<<i+1<<":";
		cin>>arr[i];
	}
	
	int temp;
	temp=arr[0];
	arr[0]=arr[4];
	arr[4]=temp;
	
	
	
	cout<<"\nBelow You can See Your Complete Array\n";
	for(int i=0;i<=4;i++)
	{
	cout<<"Index Number: "<<i<<"\tValue "<<arr[i]<<endl;
	}
}