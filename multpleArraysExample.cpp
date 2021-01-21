#include<iostream>
using namespace std;
main()
{
	cout<<"Rates Mango 20rup\nOrange 10 rp\nBnana 5 rp\n";
	cout<<"Purchase Mango , Bnana and Orange\n";
	cout<<"I will Display the Total Billa and Customer Number\n";
int Mango[5],Banana[5],Orange[5];
int sum[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Purchase Mango in Kg!";
		cin>>Mango[i];
		cout<<"Purchase Orange in Kg!";
		cin>>Orange[i];
		cout<<"Purchase Banana in Kg!";
		cin>>Banana[i];
		sum[i]=(Mango[i]*20)+(Orange[i]*10)+(Banana[i]*5);
		cout<<"---------------------------------------------------\n";
		cout<<"Customer_Number\tMango\tOrange\tBanana\tGrand_Total\n";
        cout<<"\t  "<<i+1<<"\t"<<Mango[i]<<"\t"<<Orange[i]<<"\t"<<Banana[i]<<"\t"<<sum[i]<<endl;
        cout<<"---------------------------------------------------\n";
	}
//cout<<"---------------------------------------------------\n";
//cout<<"Customer_Number\tMango\tOrange\tBanana\tGrand_Total\n";
//	for(int i=0;i<1;i++)
//	{
//		cout<<"\t  "<<i+1<<"\t"<<Mango[i]<<"\t"<<Orange[i]<<"\t"<<Banana[i]<<"\t"<<sum[i]<<endl;
//	}
	
}