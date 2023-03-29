#include<stdio.h>

main()
{
	int i,n;
	
	printf("enter the array leangth : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("enter %d array value ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\narray..\n");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
	int choice1;
	
	printf("\n\nenter '1' to insert in array\n");
	printf("enter '2' to delete any array\n");
	printf("enter '3' to update array property\n");
	
	printf("\nselect your choice : ");
	scanf("%d", &choice1);
	
	
	switch (choice1)
	{
		case 1:
			printf("\nenter operation...");
			
			int p;
			printf("\nenter the position ");
			scanf("%d",&p);
			int b;
			printf("\nenter the new element value ");
			scanf("%d",&b);
			
			int s = n+1;
			
			for(i=s; i>=p; i--)
			{
				a[i+1] = a[i];
			}
			a[p] = b;
			
			printf("\nafter inserting element array is...\n");
			for(i=0; i<s; i++)
			{
				printf("%d ",a[i]);
			}
		break;
		
		case 2:
			printf("\nenter operation...");
			
			int d;
			printf("\nenter the position ");
			scanf("%d",&d);
			
			if(d==0 || d<n)
			{
				for(i=d; i<n; i++)
				{
					a[i] = a[i+1];
				}
				
				printf("\natfer deleting element array is...\n");
				for(i=0; i<n-1; i++)
				{
					printf("%d ",a[i]);
				}
			}
			else 
			{
				printf("\ncheck your position...");
			}
		break;
		
		case 3:
			printf("\nupdate operation...");
			int u=n;
			
			printf("\nenter the position ");
			scanf("%d",&u);
			
			int e;
			if(u==0 || u<n)
			{
				printf("\nenter the new element : ");
				scanf("%d",&e);
				a[u]=e;
			}
			else 
			{
				printf("\ncheck your position...");
			}
			
			printf("\nafter updeting element array is...\n");
			for(i=0; i<n; i++)
			{
				printf("%d ",a[i]);	
			}
		break;
		
		default :
			printf("\nenter valid choice"); 
		break;
	}
}
