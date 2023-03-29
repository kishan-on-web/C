#include<stdio.h>

main()
{
	int i,j,c,n;
	
	printf("enter the array leangth : ");
	scanf("%d",&n);
	
	int a[n],b[n];
	
	for(i=0; i<n; i++)
	{
		printf("enter %d array value : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++){
		c=1;
		if(a[i] != -1){
			for(j=i+1; j<=n; j++)
			{
				if(a[i] == a[j]) {
					c++;
					a[j] = -1;
				}
			}
			b[i] = c;
		}
	}
	printf("\nelement frequency \n");
	for(i=0;i<n;i++)
	{
		if(a[i]!=-1)
		printf("%d is %d \n",a[i],b[i]);
	}
}
