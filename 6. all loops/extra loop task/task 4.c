#include<stdio.h>

main()
{
	int n, sum=0, l;
	
	printf("enter any number : ");
	scanf("%d",&n);
	
	l = n % 10;
	
	while (n>=10)
	{
		n = n / 10;
	}
	sum = n + l;
	
	printf("sum of first and last digit = %d",sum);
}
