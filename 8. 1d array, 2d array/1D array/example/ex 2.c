#include<stdio.h>

main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10,};
	int i;
	
	for(i=0; i<10; i++)
	{
		if(i%2==0)
		{
			a[i] = a[i]*2;
		}
		else 
		{
			a[i] =a[i]+10;	
		}
	}
	
	for(i=0; i<10; i++)
	{
		printf("%d ",a[i]);
	}
	
}
