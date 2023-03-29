#include<stdio.h>
 
main()
{
	int n,rev=0, temp;
	
	printf("enter the number : ");
	scanf("%d",&n);
	
	temp = n;
	
	while(n>0)
	{
		rev = (rev*10) + (n%10);
		n = n/10;
	}
	
	printf("Rev number : %d\n",rev);
	
	if (rev == temp)
	{
		printf("this number is palindrome...");
	}
	else 
	{
		printf("this number is not palindrome...");
	}
}
