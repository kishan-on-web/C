o#include<stdio.h>

main()
{
	int r,c;
	
	printf("first 2d array value and size...");
	
	printf("\nenter the row size : ");
	scanf("%d",&r);

	printf("enter the columns size : ");
	scanf("%d",&c);
	
	int a[r][c];
	int i,j;
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("enter element at[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	 
	printf("\nsecond 2d array value and size...\n");
	int b[r][c];
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("enter element at[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	
	printf("\nfirst and second array addition....");
	int t[r][c];
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			t[i][j] = a[i][j] + b[i][j];
		}
		printf("\n");	 
	}
	
	for(i=0;i<r;i++){
    	for(j=0;j<c;j++){
			printf("%d ",t[i][j]);
    	}
		printf("\n");		
	}
	
}
