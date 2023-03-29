#include<stdio.h>

main()
{
	char choice;
	int choice2;
	
	printf("enter for 'M' Monday\n");
	printf("enter for 'T' Tuseday\n");
	printf("enter for 'W' Wednesday\n");
	printf("enter for 't' Tursday\n");
	printf("enter for 'F' Friday\n");
	printf("enter for 'S' Saturday\n");
	printf("enter for 's' Sunday\n");
	printf("enter for 'M' Monday\n\n");
	
	printf("enter day first latter : ");
	scanf("%c", &choice);
	
	switch (choice)
	{
		case 'M':
			
			printf("\ntoday is Monday\n\n");
			
			printf("\nenter for 1 good morning");
			printf("\nenter for 2 good afternoon");
			printf("\nenter for 3 good evening\n\n\n");
			
			printf("enter your choice: ");
			scanf("%d",&choice2);
			
			switch (choice2)
			{
				case 1:
					printf("good morning");
					break;
				case 2:
					printf("good afternoon");
					break;	
				case 3:
					printf("good evening");
					break;
				default :
					printf("enter valid choice"); 
					break;
			}
			break;
			
		case 'T':
			printf("\ntoday is Tuseday\n");
			break;
		case 'W':
			printf("\ntoday is Wednesday\n");
			break;
		case 't':
			printf("\ntoday is Tursday\n");
			break;
		case 'F':
			printf("\ntoday is Firday\n");
			break;
		case 'S':
			printf("\ntoday is Saturday\n");
			break;
		case 's':
			printf("\ntoday is Sunday\n");
			break;	
		
		default :
			printf("enter valid choice"); 
	}

}
