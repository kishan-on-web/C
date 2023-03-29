#include<stdio.h>

main()
{
	int i,n;
	
	printf("enter the array leangth : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("enter %d array value ",i);
		scanf("%d",&a[i]);
	}
	
	for (i=0; i<n; i++) 
	{
		if (a[0]<a[i]) 
		{
      		a[0]=a[i];
    	}
  	}
	printf("\nLargest element = %d", a[0]);
}
