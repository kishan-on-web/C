#include<stdio.h>

main()
{
	int i;
	int num;
	
	printf("enter any number : ");
	scanf("%d",&num);
	
	while(num>0)
	{
		num = num / 10;
		i++;
	}
	
	printf("count digit of number : %d",i);
}
