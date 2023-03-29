#include<stdio.h> 

void main()
{
	int a,b,c,d;
	printf("enter the value of a :");
	scanf("%d", &a);
	printf("enter the value of b :");
	scanf("%d", &b);
	printf("enter the value of c :");
	scanf("%d", &c);
	printf("enter the value of d :");
	scanf("%d", &d);
	
	
	if (a==b && b==c && c==d)
	{
		printf("all value are same");
	}
	
	else if (a==b && b==c)
	{
		printf("a, b and c same");
	}
	else if (a==b && b==d)
	{
		printf("a, b and d  same");
	}
	else if (a==c && c==d)
	{
		printf("a, c and d same");
	}
	else if (b==c && c==d)
	{
		printf("b,c and d same");
	}
	
	
	else if (a==b && c==d)
	{
		printf("a,b and c,d same");
	}
	else if (a==d && c==b)
	{
		printf("a,d and b,c same");
	}
	else if (a==c && b==d)
	{
		printf("a,c and b,d same");
	}
	
	else if (a==b)
	{
		printf("a,b is same");
	}
	else if (a==c)
	{
		printf("a, c is same");
	}
	else if (a==d)
	{
		printf("a,d is same");
	}
	else if (b==c)
	{
		printf("b,c is same");
	}
	else if (b==d)
	{
		printf("b,d is same");
	}
	else if (c==d)
	{
		printf("c,d is same");
	}
	
	else
	{
		if (a > b)
		{
			if (a > c)
			{
				if (a > d)
				{
					printf("a is max..");
				}
				else 
				{
					printf("d is max..");
				}
			}
			else 
			{
				if (c > d)
				{
					printf("c is max..");
				}
				else 
				{
					printf("d is max...");	
				}
			}
		}
		else 
		{
			if (b > c)
			{
				if (b > d) 
				{
					printf("b is max..");	
				}
				else 
				{
					printf("d is max....");
				}		
			}	
			else 
			{
				if (c > d)
				{
					printf("c is max...");
				}
				else 
				{
					printf("b is max..");LimgPE courses
				}
			}
		}
	}
	return 0;
}
