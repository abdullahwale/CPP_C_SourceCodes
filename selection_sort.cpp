#include<iostream>
using namespace std;
main()
{
	        //  0   1  2  3  4
	int arr[5]={56,78,33,81,12};
	int min;
	cout<<"Selection Sort";
	for(int i=0;i<4;i++)
	{
		min=i;//min=4,,i==1
		for(int j=i+1;j<5;j++)
		{//j==12<33
			if(arr[j]>arr[min])
			min=j;
		}
		if(min!=i)
		{
			int temp;
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	}
	cout<<"\nSorted Array\n";
	for(int i=0;i<5;i++)
	cout<<arr[i]<<"\t";
}