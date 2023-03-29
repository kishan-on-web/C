#include<stdio.h>

main()

{
	int i, j, s;
	
	for (i=1; i<=5; i++)
	{
		for(s=i; s<=4; s++)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("%d",i%2);
		}
		printf("\n");
	}
	
}
