#include<stdio.h>

main()
{
	int a[5][5] ={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
	
	int i,j,sum=0;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==0 || j==4 || j==0 || i==4){
				printf("%d ",a[i][j]);
				sum = sum + a[i][j];
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n\naddition of the array is : %d",sum);
}
