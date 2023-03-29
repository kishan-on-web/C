#include<stdio.h>

main()
{
	int i,n;
	
	i=1;
	
	printf("enter any number : ");
	scanf("%d",&n);
	
	do
	{
		printf("%d * %d = %d\n",n,i,n*i);
		i++;
	}
	while (i<=10);
}
