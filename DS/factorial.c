#include<stdio.h>
void main()
{
	int i=1,fact=1,num;
	printf("Enter a number");
	scanf("%d",&num);

	printf("for loop\n");

	for(i=1;i<=num;i++)
	{
		fact = fact * i;
	}
	printf("%d\n",fact);

	i=1;
	fact=1;
	printf("While\n");
	while(i<=num)
	{
		fact = fact * i;
		i++;
	}
	printf("%d\n",fact);

	i=1;
	fact=1;

	printf("Do While\n");

	do{
		fact = fact * i;
		i++;
	}while(i<=num);
	printf("%d\n",fact);
}