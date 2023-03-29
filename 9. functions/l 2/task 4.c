#include<stdio.h>

main()
{
	int a,b;
	
	printf("enter the first value : ");
	scanf("%d",&a);
	
	printf("enter the seconde value : ");
	scanf("%d",&b);
	
	swap(a,b);
}

swap(int x,int y)
{
	x=x+y;
	y=x-y;
	x=x-y;	
	
	printf("\nenter the first value : %d",x);
	printf("\nenter the seconde value : %d",y);	
}
