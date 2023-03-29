#include<stdio.h>

main()
{
	int r,c;
	
	printf("enter the row size : ");
	scanf("%d",&r);
	printf("enter the columns size : ");
	scanf("%d",&c);
	
	int array[r][c],l=0;
	int i,j;
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("enter element at [%d][%d] : ",i,j);
			scanf("%d",&array[i][j]);	
			l++;		
		}
		printf("\n");
	}
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	printf("\nlenght of array : %d",l);
}

