#include<iostream>
using namespace std;
main()
{
	int arr[10];
	//cout<<"Initilization of an Array";
	//int arr[5]={23,24,26,76,300};
	//int arr[]={23,24,26,76};
//	int arr[5];
//	arr[0]=29;
//	arr[1]=23;
//	arr[2]=30;
	//cout<<" "<<arr[2];
	//loop
	for(int i=0;i<=9;i++)
	{
		cout<<"Enter value for Array";
		cin>>arr[i];
	}
	cout<<arr[5]*arr[5]<<endl;
	for(int i=0;i<=9;i++)
	cout<<arr[i]<<" ";
}