#include<stdio.h>
main()
{
	printf("Difference between While and Do while\n");
	int n=6;
	while(n<=5)
	{
		printf("Abdullah\n");
		n++;
	}
	printf("While Loop End\n");
	////////////////////////
	do
	{
		printf("Abdullah\n");
		n++;
	}while(n<=5);
}