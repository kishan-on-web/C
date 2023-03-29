#include<stdio.h>

cube(int i)
{
	printf("the cube is : %d",i*i*i);
}

main()
{
	int a;
	
	printf("enter the value : ");
	scanf("%d",&a);
	
	cube(a);
}
