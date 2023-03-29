#include<stdio.h>

main()
{
	int i,e, sum=1;
	
	printf("enter the value : ");
	scanf("%d",&e);
	
	i=1;
	while (i<=e)
	{
		sum = sum * i;
		printf("%d\n",i);
		i++;		
	}
	printf("sum:  %d",sum);
}
