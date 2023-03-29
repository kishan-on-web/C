#include<stdio.h>

main()
{
	char name[50],name2[50];
	
	printf("enter name : ");
	gets(name);
	
	strcpy(name2,name);
	
	strrev(name);
	
	printf("%s\n",name);
	printf("%s\n",name2);
}
