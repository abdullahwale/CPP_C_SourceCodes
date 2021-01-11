//Conditional operator
//it is a alternative tool of if-else
//Write a program that take two number and check these are equal or not

#include<stdio.h>
main()
{
	int a,b;
	printf("Enter two Values");
	scanf("%d%d",&a,&b);
//	if(a==b)
//	printf("Both Equal");
//	else
//	printf("Not Eqaul");
//()?true:false;
(a==b)?printf("Both Equal"):printf("Not Eqaul");
}