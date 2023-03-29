#include<stdio.h>

main()
{
	char name[50];
	int res;
	
	printf("enter name : ");
	gets(name);
	
	res = strlen(name);
	
	printf("length : %d",res);
}
