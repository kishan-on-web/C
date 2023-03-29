#include<stdio.h>

main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10,};
	int i,j,k, t=0, x=12;
	
	for(i=0; i<10; i++)
	{
		for(j=i+1; j<10; j++)
		{
			for(k=j+1; k<10; k++)
			{
				if(a[i]+a[j]+a[k] == x)
				{
					t++;
					printf("(%d,%d,%d)\n",a[i],a[j],a[k]);
				}
			}
		}
	}
	printf("%d",t); 
	
}
