#include<stdio.h>

main()
{
	int i,n;
	
	printf("enter the number : ");
	scanf("%d",&n);
	
	i=n;
	 
	do
	{
	 	printf("%d\n",i);
	 	i--;
	}	
	while (i>=1);
}
