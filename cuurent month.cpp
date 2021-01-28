#include<iostream>
using namespace std;
main()
{
	cout<<"NUmber of Days Per Month\n";
	            // 0  1   2  3 4  5
	            // 1  2   3  4    6 7 
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int m,d,total=0;
	cout<<"Enter Current Month Number of Current Year";
	cin>>m;
	cout<<"Enter Date of the Curent Month";
	cin>>d;
	total=d;
	for(int i=0;i<m-1;i++)
	{
		total=total+month[i];
	}
	cout<<"Total Days Curetn year :"<<total<<endl;
	cout<<"Remaining Days of the Current year: "<<365-total;
}
