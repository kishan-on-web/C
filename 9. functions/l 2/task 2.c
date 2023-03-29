#include<stdio.h>

int addition()
{
	int i,j,sum;
	
	printf("enter the value of i : ");
	scanf("%d",&i);
	
	printf("enter the value of j : ");
	scanf("%d",&j);
	
	sum = i+j;
	
	return sum;
}

void main()
{
	int r;
	
	r = addition();
	
	printf("sum is : %d",r);
}
