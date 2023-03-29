#include<stdio.h>

main()
{
	int r,c;
	
	printf("enter the number of row : ");
	scanf("%d",&r);
	
	printf("enter the number of columns : ");
	scanf("%d",&c);
	
	int arr[r][c];
	int i,j,sum=0,k=0;
	float avg=0;
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("enter element at[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
			k++;			
		}
		printf("\n");
	}
	
	for(i=0; i<r; i++)
	{	printf("\n");
		for(j=0; j<c; j++)
		{
			printf("%d ",arr[i][j]);
			sum = sum + arr[i][j];			
		}
	}
	avg = sum/k;
	printf("\n\naddition of the array is : %d",sum);
	printf("\nlenght of array : %d",k);
	printf("\navg of array : %.2f",avg);
}
