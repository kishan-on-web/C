#include<stdio.h>

main()
{
	int a = 10, b=5;
	
	int *ptr1 = &a;
	int *ptr2 = &b;
	
	printf("%d %d\n",ptr1, ptr2);
	printf("%d %d",*ptr1, *ptr2);
	
}
