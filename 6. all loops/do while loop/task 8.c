#include<stdio.h>

main()
{
	int i,e,sum=0;
	
	printf("enter the value : ");
	scanf("%d",&e);
	
	i=1;
	
	do
	{
		sum = sum + i;
		printf("%d\n",i);
		i++;
	}
	while(i<=e);
	printf("sum : %d",sum);
	
}
