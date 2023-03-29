#include<stdio.h>

main()
{
	int i, j, n=4;
	
	for(i=0; i<=n; i++)
	{
		for(j=0; j<=i; j++)
		{
			if(i%2!=0)
			{
				printf("%d ",+j+1);
		    }
		    else
		    {
		     printf("%c ",'A'+j);
			}
			
		}
		printf("\n");
	}
}
