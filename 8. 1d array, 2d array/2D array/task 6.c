#include<stdio.h>

main()
{
	int n;
	
	printf("enter the row size : ");
	scanf("%d",&n);
	
	int a[n][n];
	int i,j,sum=0;
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("enter the value index no. [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
//	printf("\nenter the row no. : ");
//	scanf("%d ",&r);
//	
//	for(i=0; i<r; i++){
//		r=a[i][j];	
//	}
	
	for(i=0; i<n; i++){
		sum =0;
		for(j=0; j<n; j++){
			sum = sum + a[j][i];
		}
		printf("\naddition of columns is : %d ",sum);
	}

}
