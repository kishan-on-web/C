#include<stdio.h>

main()
{
	int n;
	
	printf("enter array size : ");
	scanf("%d",&n);
	
	int a[n],b[n],i,j;

	for(i=0; i<n; i++)
	{
		printf("enter %d array value : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++){
		printf("%d\n",a[i]);
	}
	
	printf("\nright rotate...\n");
	for(j=0; j<n; j++)
	{
		for(i=0; i<n; i++)
		{
			if(i==n-1){
				b[0] = a[i];
			}	
			else{
				b[i+1] = a[i];                               
			} 
		}
		
		for(i=0; i<n; i++)
		{
			printf("%d ",a[i]);
			a[i] = b[i];
		}
		printf("\n");
	}
	
	printf("\nleft rotate...\n");
	for(j=0; j<n; j++)
	{
		for(i=0; i<n; i++)
		{
			if(i==0){
				b[n-1] = a[i];
			}	
			else
			{
				b[i-1] = a[i];
			}
		}
		
		for(i=0; i<n; i++)
		{
			printf("%d ",a[i]);
			a[i] = b[i];
		}
		printf("\n");
	}
}
