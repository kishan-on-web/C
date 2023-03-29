#include<stdio.h>

main()
{
	char n;
	
	printf("enter the any character : ");
	scanf("%c",&n);
	
	n = n + 32;
	
	printf("%c",n);	
}
