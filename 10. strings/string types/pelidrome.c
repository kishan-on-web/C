#include<stdio.h>

main()
{
	char name[50],name2[50];
	
	printf("enter name : ");
	gets(name);
	
	strcpy(name2,name);
	
	strrev(name);
	
	if(strcmp(name2,name) == 0)
	{
		printf("this string is pelidrome..");
	}
	else {
		printf("this string is not pelidrome..");
	}
}
