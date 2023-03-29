#include<stdio.h>

main()

{
	int i, j, s;
	
	for (i=65; i<=69; i++)
	{
		for(s=i; s<=68; s++)
		{
			printf(" ");
		}
		for(j=65; j<=i; j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
	
}
