#include<iostream>
using namespace std;
main()
{
	int a,b,count,num,next;
	a=0;
	b=1;
	//cout<<a<<"\t"<<b<<"\t";
	cout<<"Enter a number";
	cin>>num;//13
	cout<<a<<"\t"<<b<<"\t";
	count=2;
	while(count<num)
	{
		next=a+b;
		cout<<next<<"\t";
		a=b;
		b=next;
		count++;
	}
	
}