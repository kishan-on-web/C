#include<stdio.h>

main()
{
	int i, n, k=0;
	
	printf("enter the value : ");
	scanf("%d",&n);
	
	int m[n];
	
	for(i=0; i<n; i++)
	{
		printf("enter %d array value ",i);
		scanf("%d",&m[i]);
	}
	
	for(i=0;i<k;i++)
	{
		k = k / 10;
	}
	printf("\nThe length of the array is : %d",i);
	
}
