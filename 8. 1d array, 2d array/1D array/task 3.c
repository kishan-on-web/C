#include<stdio.h>

main()
{
	int i,n, sum=0;
	float a;
	
	printf("enter the value : ");
	scanf("%d",&n);
	
	int m[n];
	
	for(i=0; i<n; i++)
	{
		printf("enter %d array value ",i);
		scanf("%d",&m[i]);
	}
	
	for(i=0; i<n; i++)
	{
		sum = sum+m[i];
	}
	
	a = sum / n;
	
	printf("\nthe average is : %.2f",a);
}
