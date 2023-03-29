#include<stdio.h>

main()
{
	char name[50];
	int i;
	
	puts("enter yor name :");
	gets(name);
	
	for(i=0; i<10; i++){
		if(name[0]>=97 && name[0]<=122)
		{
			name[i] = name [i] - 32;
		}
		else if(name[i]>=65 && name[i]<=90)
		{
			name[i] = name [i] + 32;
		}
	}
	puts(name);
}
