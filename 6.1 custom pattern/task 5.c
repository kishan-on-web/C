#include<stdio.h>

main()
{
	int i, j, s, s1, k;
	
	for(i=5; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		for(s=i; s<=4; s++)
		{
			printf(" ");
		}
		for(s1=i; s1<=4; s1++)
		{
			printf(" ");
		}
		for(k=i; k>=1; k--)
		{
			printf("%d",k);
		}
	printf("\n");
	}
	
	for(i=2; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		for(s=i; s<=4; s++)
		{
			printf(" ");
		}
		for(s1=i; s1<=4; s1++)
		{
			printf(" ");
		}
		for(k=i; k>=1; k--)
		{
			printf("%d",k);
		}
	printf("\n");
	}
}
