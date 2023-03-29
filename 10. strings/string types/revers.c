#include<stdio.h>

main()
{
	char name[50];
	
	printf("enter name : ");
	gets(name);
	
	strrev(name);
	
	printf("%s",name);	
}
