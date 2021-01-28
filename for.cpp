#include<iostream>
using namespace std;
main()
{
//take anumber and dipslay its lowedt and higest number
//391,,,9,,,1
int num,rem,c;
cout<<"Enter a number";
cin>>num;//91
int copy=num;
int h=num%10;//1
int l=num%10;//1////91
num=num/10;
for(c=num;c>=1;c=c/10)//9/10=0
{
	rem=c%10;//9%10=9
	if(rem>h)
	h=rem;
	if(rem<l)
	l=rem;
}
	
	
cout<<"The Heigsst: "<<copy<<"\t"<<h<<endl;
cout<<"The Lowest :" <<copy<<"\t"<<l<<endl;	
	
	
//	//Display Sum of Square of integer from 1 to N
//	int n,sum=0,c;
//	cout<<"Enter a number";
//	cin>>n;
//	for( c=1;c<=n;c++)
//	{
//		sum=sum+(c*c);
//	}
//	cout<<"The Sum of Square: "<<sum;
	
	
	
	
	
	
	
	
////Display Sum off Odd Numbers,1 10
////int sum=0;
//int pro=1;
//
//	for(int n=1;n<=10;n=n+2)
//	{
//	//sum=sum+n;
//	pro=pro*n;
//	}
//	//cout<<"The Sum is: "<<sum;
//cout<<"The Pro is: "<<pro;	
}
