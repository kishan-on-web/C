#include<stdio.h>

main()
{
	int a,b;
	
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	
	(a==b)
		? printf("a and b same")
		: (a>b)
			? printf("a is max..")
			: printf("b is max..");
}
