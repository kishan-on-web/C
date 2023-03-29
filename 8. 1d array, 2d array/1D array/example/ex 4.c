#include<stdio.h>

main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10,};
	int i,j, t=0, x=13;
	
	for(i=0; i<10; i++)
	{
		for(j=i+1; j<10; j++)
		{
			if(a[i]+a[j]==x)
			{
				t++;
				printf("(%d,%d)\n",a[i],a[j]);
			}
		}
	}
	printf("%d",t); 
	
}
