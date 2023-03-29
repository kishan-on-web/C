#include<stdio.h>

main()
{
	int n;
	
	printf("enter the row size : ");
	scanf("%d",&n);
	
	int arr[n];
	int i,sum;
	for(i=0; i<n; i++){
		printf("enter the value array %d : ",i);
		scanf("%d",&arr[i]);
	}
	
	sum = addition(arr,i);
	
	printf("sum is : %d",sum);
}
addition(int arr[],int n)
{
	int sum=0,i;
	for(i=0; i<n; i++){
		sum = sum + arr[i];
	}
	return sum;
}


