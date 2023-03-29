#include<stdio.h>

main()
{
	int i, n;
	
	printf("Enter the count arr : ");
	scanf("%d",&n);
	
	int m[n];
	
	for(i=0; i<n; i++)
	{
		printf("enter the marks : ");
		scanf("%d",&m[i]);
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d\n",m[i]);
	}
}
