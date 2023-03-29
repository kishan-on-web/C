
#include<stdio.h>

main()
{
	int i,n,j,k;
	
	printf("enter the value : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("enter %d array value ",i);
		scanf("%d",&a[i]);
	}
 
	printf("\nenter the position : ");
	scanf("%d",&j);
	
	printf("\nenter the update value : ");
	scanf("%d",&k);
	
	a[j]= k;
	
	for(i=0; i<n; i++)
	{
		printf("%d\n",a[i]);
	}
}
