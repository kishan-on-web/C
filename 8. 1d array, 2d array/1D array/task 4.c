#include<stdio.h>
#define j 5
main()
{
	int i,n;
	int arr[j];
	int arr2[j];
	int arr3[i];
	
	printf("firts arr value\n");
	for(i=0; i<j; i++)
	{
		printf("enter %d array value ",i);
		scanf("%d",&arr[i]);
	}
	printf("\n\n");
	
	printf("\nsecond arr value\n");
	for(i=0; i<j; i++)
	{
		printf("enter %d array value ",i);
		scanf("%d",&arr2[i]);
	}
	
	for(i=0; i<j; i++)
	{
		arr3[i] = arr[i] + arr2[i];
	}
	printf("\n");
	printf("addition of array :\n");
	
	for(i=0; i<j; i++)
	{
		printf("\n%d",arr3[i]);
	}
}
