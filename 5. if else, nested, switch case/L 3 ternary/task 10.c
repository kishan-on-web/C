#include<stdio.h>

main ()
{
	int a,b,c,d;
	
	printf("enter the value of a : ");
	scanf("%d",&a);
	printf("enter the value of b : ");
	scanf("%d",&b);
	printf("enter the value of c : ");
	scanf("%d",&c);
	printf("enter the value of d : ");
	scanf("%d",&d);
	
	(a==b && b==c && c==d)
		? printf("all value are same...")
		: (a==b && b==c)
			? printf("a,b and c same...")
			: (a==c && c==d)
				? printf("a,c and d same...")
				: (b==c && c==d)
					? printf("b,c and d same...")
					: (a==b && b==d)
						? printf("a,b and d same...")
						: (a==b && c==d)
							? printf("a,b and c,d same...")
							: (a==d && c==b)
								? printf("a,d and c,b same...")
								: (a==c && b==d)
									? printf("a,c and b,d same...")
									: (a==b)
										? printf("a,b same...")
										: (a==c)
											? printf("a,c same...")
											: (a==d)
												? printf("a,d same...")
												: (b==c)
													? printf("b,c same...")
													:(b==d)
														? printf("b,d same...")
														: (c==d)
															? printf("c,d same...")
															: (a>b)
																? (a>c)
																	? (a>d)
																		? printf("a is max...")
																		: printf("d is max...")
																	: (c>d)	
																		? printf("c is max...")
																		: printf("d is max...")
																: (b>c)
																	? (b>d)
																		? printf("b is max...")	
																		: printf("d is max...")
																	: (c>d)	
																		? printf("c is max...")
																		: printf("d is max...");
}

















