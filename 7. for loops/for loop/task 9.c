#include<stdio.h>

main()
{
	int i,e, sum=1;
	
	printf("enter the value : ");
	scanf("%d",&e);
	
	for (i=1; i<=e;i++)
	{
		sum = sum * i;
		printf("%d\n",i);		
	}
	printf("sum:  %d",sum);
}
