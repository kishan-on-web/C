#include<stdio.h>

main()
{
	int i,n;
	
	printf("enter the array leangth : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("enter %d arr value ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		if(a[i]<0)
		{
			printf("%d\n",a[i]);	
		}
	}
}
