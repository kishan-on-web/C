#include<stdio.h>

divisible(int a)
{
	if((a%3)==0 && (a%5)==0){
		printf("\nvalue is divisible by 3 & 5 both..");
	}
	else if(a%3==0){
		printf("\nvalue is only divisible by 3...");
	}
	else if(a%5==0)
	{
		printf("\nvalue is only divisible by 5...");
	}
	else 
	{
		printf("\nvalue is not divisible by 3 or 5...");
	}
}

main()
{
	int i; 
	printf("enter the value : ");
	scanf("%d",&i);
	
	divisible(i);
}
