#include<stdio.h>

main()
{
	
	int i,n;
	printf("enter the size of your name : ");
	scanf("%d",&n);
	char name[n];
	puts("enter yor name : ");
	scanf("%s",&name);
	
	for(i=0; i<n; i++){
		if(name[i]>=97)
		{
			name[i] = name [i] - 32;
		}
	}
	printf("%s",name);
}
