#include<stdio.h>

main()
{
	int a, b;
	
	printf("enter the value 'a' : ");
	scanf("%d",&a);
	printf("enter the value 'b' : ");
	scanf("%d",&b);
	
	int *ptr1 = &a;
	int *ptr2 = &b;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\na = %d, b = %d",*ptr1, *ptr2);
	
}
