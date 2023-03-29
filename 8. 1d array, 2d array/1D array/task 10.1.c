#include<stdio.h>

main()
{
	int n;
	
	printf("enter array size : ");
	scanf("%d",&n);
	
	int a[n],i,j;

	for(i=0; i<n; i++)
	{
		printf("enter %d array value : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++){
		printf("%d\n",a[i]);
	}
	
	printf("\nleft rotate...\n");
	int t;
	for(j=0; j<n; j++)
	{
		t=a[0];
		a[0]= a[n-1];
		for(i=n; i>1; i--)
		{
			a[i]=a[i-1];
		}
		a[1]=t;
		
		for(i=0; i<n; i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");
	}
	
}
