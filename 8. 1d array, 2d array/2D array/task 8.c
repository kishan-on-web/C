#include<stdio.h>

main()
{
	int n;
	
	printf("enter the size of row and column : ");
	scanf("%d",&n);
	
	int a[n][n];
	int i,j,sum=0;
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("enter ther value row and column [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(i+j==n-1){ 
				printf("%d ",a[i][j]);
				sum = sum + a[i][j]; 
			}
			else{ 
				printf(" "); 
			}
		}
		printf("\n");
	}
	printf("\n\naddition of the array is : %d",sum);
}
