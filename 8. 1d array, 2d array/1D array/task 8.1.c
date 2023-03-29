#include<stdio.h>

main()
{
	int n;
	printf("enter the size of array : ");
	scanf("%d",&n);
	
	int i,j,l, a[n];
	for(i=0; i<n; i++){
		printf("enter the %d value : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		l=0;
		for(j=0; j<n; j++)
		{
			if(a[i]==a[j])
			{
				l++;
			}
		}
		printf("%d is %d\n",a[i],l);
	}
}
