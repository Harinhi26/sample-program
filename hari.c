#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the first element:");
	scanf("%d",&a);
	printf("Enter the second element:");
	scanf("%d",&b);
	c=a+b;
	printf("the value of c is:%d",c);
	if(c%2!=0)
	printf("\nthe value is odd",&c);
	else
	{
	printf("\nthe value is even",&c);
}
	return 0;
}
