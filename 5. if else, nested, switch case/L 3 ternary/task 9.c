#include<stdio.h>

main ()
{
	int a,b,c;
	
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	printf("enter the value of c :");
	scanf("%d",&c);
	
	(a==b && b==c)
		?printf("all value are same..")
		: (a==b)
			? printf("a,b same..")
			: (a==c)
				? printf("a,c same..")
				: (b==c)
					? printf("b,c same..")
					:(a > b)
						?(a>c)
							?printf("a is max..")
							:printf("c is max..")
						:(b>c)
							?printf("b if max")
							:printf("c is max");
						
}
