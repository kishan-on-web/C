#include<stdio.h>

main()
{
	int i,n;
	
	printf("array size : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		if(a[i]>a[0])
		{
			a[0]=a[i];
		}
	}
	printf("\n%d",a[0]);

	
	
	
}
