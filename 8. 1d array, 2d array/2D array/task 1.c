#include<stdio.h>

main()
{
	int n,i,j,r,c;
	
	printf("enter the number of row : ");
	scanf("%d",&r);
	
	printf("enter the number of columns : ");
	scanf("%d",&c);
	
	int arr[r][c];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("enter element at[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);			
		}
		printf("\n");
	}
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",arr[i][j]);			
		}
		printf("\n");
	}
}
