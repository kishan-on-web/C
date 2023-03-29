#include<stdio.h>


main()
{
	int i,k,l,a,b;
	
	printf("firts arr value : ");
	scanf("%d",&a);
	int arr[a];
	
	for(i=0; i<a; i++)
	{
		printf("enter %d array value ",i);
		scanf("%d",&arr[i]);
	}
	printf("\n");
	
	printf("\nsecond arr value : ");
	scanf("%d",&b);
	int arr2[b];
	
	for(i=0; i<b; i++)
	{
		printf("enter %d array value ",i);
		scanf("%d",&arr2[i]);
	}
	
	k = a+b;
	int arr3[k];
	
	for(i=0; i<a; i++) {
		arr3[i] = arr[i];	
	} 
	
	for(i=0, l=a; 
	l<arr3 && i<b; i++, l++){
		arr3[l] = arr2[i];
	}
	printf("\nmerging value");
	
	
	for(i=0; i<k; i++)
	{
		printf("\n%d",arr3[i]);
	}
}
