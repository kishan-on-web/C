#include<stdio.h>

main ()
{
	int a, b;
	printf("enter two different values :- \n");
	scanf("%d %d",&a , &b);
	
	if (a > b)
	{
		printf("%d is minimum2\n", b);
	}
	else if (b > a)
	{
		printf("%d is minimum\n", a);
	}
	else 
	{
		printf("both of equal\n");
	}
}
