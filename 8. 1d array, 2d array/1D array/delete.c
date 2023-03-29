#include<stdio.h>

main()
{
	int i,n,k;
	
	printf("ether the leangth of array : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("enter the array : ");
		scanf("%d",&a[i]);
	}
	
	printf("\nenter the position : ");
	scanf("%d",&k);
	 
	
	for(i=k-1; i<n; i++)
	{
		a[i] = a[i+1];
	}
	
	for(i=0; i<n-1; i++)
	{
		printf("%d\n",a[i]);
	}
}
