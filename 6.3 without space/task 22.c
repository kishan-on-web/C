#include<stdio.h>

main()
{
	int i, j;
	char c='A';
	
	for(i=1; i<=5; i++)
	{
		for(j=i; j>=1; j--)
		{
			printf("%c ",c);
			c++;
		}
		printf("\n");
	}
}
