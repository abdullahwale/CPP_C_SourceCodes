#include<iostream>
using namespace std;
main()
{
	int arr[9]={2,3,4,6,7,8,9,10,11};
	int s,e,m,num;
	cout<<"Enter value";
	cin>>num;
	s=0;
	e=8;
	int loc=-1;
	while(s<=e)
	{
		m=(s+e)/2;
		if(num==arr[m])
		{
			loc=m;
			break;
		}
		else if(num>arr[m])
		s=m+1;
		else
		e=m-1;
	}
	if(loc==-1)
	cout<<"Value Not Found";
	else
	cout<<"Value Found At"<<loc;
}