#include<stdio.h>

main()
{
	int f=0, s=1, t, i, n;
	
	printf("enter the number : ");
	scanf("%d",&n);
	
	printf("\n%d %d ",f,s);
	
	i = 2;
	
	while(i<n)
	{
		t=f+s;
		printf("%d ",t);
		f=s;
		s=t;
		++i;		
	}
}
