#include<stdio.h>
void main()
{
	int num=0;
	printf("enter number of values");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("number is even");
	}
	else
	{
		printf("number is odd");
	}
}