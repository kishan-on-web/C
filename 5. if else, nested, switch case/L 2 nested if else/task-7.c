#include<stdio.h>

main()
{
	int a,b,c,d,e;
	printf("enter the value of a :");
	scanf("%d", &a);
	printf("enter the value of b :");
	scanf("%d", &b);
	printf("enter the value of c :");
	scanf("%d", &c);
	printf("enter the value of d :");
	scanf("%d", &d);
	printf("enter the value of e :");
	scanf("%d", &e);
	
	if (a==b && b==c && c==d && d==e )
	{
		printf("all value are same");
	}
	
	else if (a==b && b==c && c==d)
	{
		printf("a,b,c and d same");
	}
	else if (a==b && b==c && c==e)
	{
		printf("a,b,c and e same");
	}
	else if (a==b && b==d && d==e)
	{
		printf("a,b,d and e same");
	}
	else if (a==c && c==d && d==e)
	{
		printf("a,c,d and e same");
	}
	else if (b==c && c==d && d==e)
	{
		printf("b,c,d and e same");
	}
	
	
	else if (a==b && b==c && d==e)
	{
		printf("a,b,c and d,e same");
	}
	else if (a==b && b==d && c==e) 
	{
		printf("a,b,d and c,e same");
	}
	else if (a==b && b==e && c==d)
	{
		printf("a,b,e and c,d same");
	}
	else if (a==c && c==d && b==e)
	{
		printf("a,c,d and b==e same");
	}
	else if (a==c && c==e && b==d)
	{
		printf("a,c,e and b,d same");
	}
	else if (a==d && d==e && c==b)
	{
		printf("a,d,e and c,b same");
	}
	else if (b==c && c==d && a==e)
	{ 
		printf("b,c,d and a,e same");
	}
	else if (b==d && d==e && a==c)
	{
		printf("b,d,e and a,c same");
	}
	else if (b==c && c==e && a==d)
	{
		printf("b,c,e and a,d same");
	}
	else if (c==d && d==e && a==d)
	{
		printf("c,d,e and a,d same");
	}
	
	else if (a==b && b==c)
	{
		printf("a,b,c same");
	}
	else if (a==b && b==d)
	{
		printf("a,b,d is same");
	}
	else if (a==b && b==e)
	{
		printf("a,b,e is same");
	}
	else if (a==c && c==d)
	{
		printf("a,c,d is same");
	}
	else if (a==c && c==e)
	{
		printf("a,c,e is same");
	}
	else if (a==d && d==e)
	{
		printf("a,d,e is same");
	}
	else if (b==c && c==d)
	{ 
		printf("b,c,d is same");
	}
	else if (b==d && d==e)
	{
		printf("b,d,e is same");
	}
	else if (b==c && c==e)
	{
		printf("b,c,e is same");
	}
	else if (c==d && d==e)
	{
		printf("c,d,e is same");
	}
	
	else if (a==b)
	{
		printf("a,b is same");                                                   
	}
	else if (a==c)
	{
		printf("a,c is same");
	}
	else if (a==d)
	{
		printf("a,d is same");
	}
	else if (a==e)
	{
		printf("a,e is same");
	}
	else if (b==c)
	{
		printf("b,c is same");
	}
	else if (b==d)
	{
		printf("b,d is same");
	}
	else if (b==e)
	{
		printf("b,e is same");
	}
	else if (c==d)
	{
		printf("c,d is same");
	}
	else if (c==e)
	{
		printf("c,e is same");
	}
	else if (d==e)
	{
		printf("d,e is same");
	}
	
	else 
	{
		if (a < b)
		{
			if (a < c)
			{
				if (a < d)
				{
					if (a < e)
					{
						printf("a is mini...");
					}
					else
					{
						printf("e is mini...");
					}
				}
				else 
				{
					if (d < e)
					{
						printf("d is mini..");	
					}
					else 
					{
						printf("e is mini..");
					}
				}
			}
			else 
			{
				if(c<d)
				{
					printf("c is mini..");
				}
				else 
				{
					printf("e is mini..");
				}
			}
		}
		else
		{
			if(b<c)
			{
				if(b<d)
				{
					if(b<e)
					{
						printf("b is mini..");
					}
					else
					{
						printf("e is mini..");
					}
				}
				else
				{
					printf("d is mini..");
				}	
			}
			else
			{
				printf("c is mini..");
			}	
		}
	}
}
