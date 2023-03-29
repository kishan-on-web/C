#include<stdio.h>

main()
{
	int r,c;
	
	printf("enter the row size : ");
	scanf("%d",&r);
	
	printf("enter the columns size : ");
	scanf("%d",&c);
	
	int a[r][c];
	int i,j,sum;
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("enter the value index no. [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]); 
		}
		printf("\n");
	}
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<r; i++){
		sum =0;
		for(j=0; j<c; j++){
			sum = sum + a[i][j];
		}
		printf("\naddition of row is : %d ",sum);
	}
}
