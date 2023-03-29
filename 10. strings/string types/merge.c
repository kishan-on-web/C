#include<stdio.h>

main()
{
	char name[50],name2[50];
	
	printf("enter first name : ");
	gets(name);
	printf("enter last name : ");
	gets(name2);
	
	strcat(name,name2);
	
	puts(name);
}
