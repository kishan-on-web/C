#include<stdio.h>

main()
{
	int a,b,c;
	printf("enter the value of a :");
	scanf("%d", &a);
	printf("enter the value of b :");
	scanf("%d", &b);
	printf("enter the value of c :");
	scanf("%d", &c);
	
	
	if (a==b && b==c)
	{
		printf("all value are same");
	}
	else if (a==b)
	{
		printf("a, b is same");
	}
	else if (a==c)
	{
		printf("a, c is same");
	}
	else if (b==c)
	{
		printf("b, c is same");
	}
	
	else
	{
		if (a < b)
		{
			if (a < c)
			{
				printf("a is mini..");
			}
			else 
			{
				printf("c is mini..");
			}
		}
		else 
		{
			if (b > c)
			{
				printf("c is mini..");	
			}	
			else 
			{
				printf("b is mini..");
			}
		}
	}
}


