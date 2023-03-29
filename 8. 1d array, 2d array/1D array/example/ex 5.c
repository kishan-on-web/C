#include<stdio.h>

main()
{
	int i,j, c=0, x;
	
	printf("enter the size of array : ");
	scanf("%d",&j);
	int a[j];
	
	for(i=0; i<j; i++)
	{
		printf("enter %d array : ",i);
		scanf("%d",&a[i]);
	}
	
	scanf("%d",&x);
	
	for(i=0; i<j; i++)
	{
		if(a[i]>x)
		{
			c++;
		}
	}
	printf("%d",c); 
	
}
