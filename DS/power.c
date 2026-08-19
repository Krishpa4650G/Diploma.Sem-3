#include <stdio.h>
void main ()
{
	int x,i=1 , y,ans=1;
	scanf("%d%d",&x,&y);

	printf("for loop\n");

	for (i = 1; i <= y; i++)
	{
		ans=ans*x;
	}

	printf("%d\n",ans );
	
	ans=1;
	i=1;

	printf("While\n");

	while(i <= y)
	{
		ans=ans*x;
		i++;
	}

	printf("%d\n",ans );

	ans=1;
	i=1;

	printf("Do while\n");

	do{
		ans=ans*x;
		i++;
	}while(i <= y);

	printf("%d\n",ans );

}