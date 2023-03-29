#include<stdio.h>

Addition(int a,int b)
{
	printf("\naddition is = %d",a+b);
}
subtrction(int a,int b)
{
	printf("\nsubtrction is = %d",a-b);
}
multiplition(int a,int b)
{
	printf("\nmultiplition is = %d",a*b);
}
divition(int a,int b)
{
	printf("\ndivition is = %d",a/b);
}


main()
{
	int i,j,choice;
	do
	{
		printf("press 1 to addition...\n");
		printf("press 2 to subtrction...\n");
		printf("press 3 to multiplition...\n");
		printf("press 4 to divition...\n");
		printf("press 0 to exit...\n");
	
		printf("enter your choice : ");
		scanf("%d",&choice);
		
		switch (choice)
		{
			case 1:
				printf("\nenter the first value : ");
				scanf("%d",&i);
				printf("enter the second value : ");
				scanf("%d",&j);
			
				Addition(i,j);
			
				break;
			case 2:
				printf("\nenter the first value : ");
				scanf("%d",&i);
				printf("enter the second value : ");
				scanf("%d",&j);
			
				subtrction(i,j);
				break;
			case 3:
				printf("\nenter the first value : ");
				scanf("%d",&i);
				printf("enter the second value : ");
				scanf("%d",&j);
				
				multiplition(i,j);
				break;
			case 4:
				printf("\nenter the first value : ");
				scanf("%d",&i);
				printf("enter the second value : ");
				scanf("%d",&j);
			
				divition(i,j);
				break;
			case 0:
				break;
			default :
				printf("enter valid choice");
				break;
		}
		printf("\n");
	}
	while(choice != 0);
}
