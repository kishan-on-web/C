#include<stdio.h>

main()
{
	int i,j,n;
	
	printf("enter the number : ");
	scanf("%d",&n);
	
	for(i=5; i<=n; i++)
	{
		for(j=i; j<=n; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
