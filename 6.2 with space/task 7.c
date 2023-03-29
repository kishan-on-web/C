#include<stdio.h>

main()

{
	int i, j, s;
	
	for (i=5; i>=1; i--)
	{
		for(s=4; s>=i; s--)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
}
