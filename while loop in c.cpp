#include<stdio.h>
main()
{
	//5 -10,,,,6,8,10....5,7,9
	int s,e;
	int ec=0,oc=0;
	printf("Enter Starting Number");
	scanf("%d",&s);
	printf("Enter Ending Number");
	scanf("%d",&e);
	while(s<=e)
	{
		if(s%2==0)
		ec++;
		else
		oc++;
	s++;//9
	}
	printf("Total Odd Numbers:%d\n",oc);
	printf("Total Even Numbers:%d",ec);
}