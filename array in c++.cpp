//Sum of number digits
#include<iostream>
using namespace std;
main()
{
	//Arm Strong Number
	//371===3*3*3=27,,,7*7*7=343+27,370+1=371
	int num;
	cout<<"Enter a number";
	cin>>num;
	int copy=num;
	int sum=0;
	int r;
	while(num!=0)
	{
		r=num%10;
		sum=sum+(r*r*r);
		num=num/10;
	}
	if(sum==copy)
	cout<<"It is a Arm Strong Number";
	else
	cout<<"Not";
	
	
//	//factorial
//	int num;
//	cout<<"enter a number";
//	cin>>num;
//	//5!,,,5
//	//2!====2*1///4!,,,4*3*2*1
//	int end=1;
//	int m=1;
//	while(num>=end)
//	{
//		//4*5=20*3=60*2=120*1
//		m=m*num;
//		num--;
//	}
//	cout<<"the Factorail of Your Number is: "<<m;
//	int num;
//	cout<<"Enter a Number";
//	cin>>num;//234%10=234-20=34-30=4
//	int copy=num;
//	int sum=0;//num=0
//	int r;//remainder
//	while(num!=0)//0!=0///false
//	{
//	r=num%10;
//	sum=sum+r;
//	num=num/10;	
//	}
//	
//	cout<<"The sum of Your Number: " <<sum;
//	
}