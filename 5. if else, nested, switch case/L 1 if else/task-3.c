 #include<stdio.h>

main ()
{
	int a;
	printf("enter two different values :- \n");
	scanf("%d",&a);
	
	if (a>0)
	{
		printf("%d is positive\n", a);
	}
	else if (a<0)
	{
		printf("%d is negative\n", a);
	}
	else 
	{
		printf("your number is nutral\n");
	}
}
