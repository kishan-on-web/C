#include<stdio.h>

main()
{
	int n;
	
	printf("enter the size of array :");
	scanf("%d",&n);
	
	int a[n],i;
	
	for(i=0; i<n; i++){
		printf("enter the value of array %d : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	
	int min[n];
	for(i=0; i<n; i++){
		min[i] = a[i];
	}
	
		
}
