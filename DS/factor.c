#include <stdio.h>
void main ()
{
	int i=1,n;
	scanf("%d",&n);
	printf("for loop\n");
	for ( i = 1; i <= n; i++)
	{
		if (n%i==0)
		{
			printf("%d\n",i );
		}
	}
	i=1;
printf("while\n");
	while(i <= n)
	{
		if (n%i==0)
		{
			printf("%d\n",i );
		}
		i++;
	}
	i=1;
printf("Do while\n");
	do{
		if (n%i==0)
		{
			printf("%d\n",i );
		}
		i++;
	}while(i <= n);
}