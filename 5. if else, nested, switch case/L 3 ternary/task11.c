#include<stdio.h>

main()
{
	int a,b,c,d,e;
	
	printf("enter the value of a : ");
	scanf("%d",&a);
	printf("enter the value of b : ");
	scanf("%d",&b);
	printf("enter the value of c : ");
	scanf("%d",&c);
	printf("enter the value of d : ");
	scanf("%d",&d);
	printf("enter the value of e : ");
	scanf("%d",&e);
	
	(a==b && b==c && c==d && d==e)
		? printf("all value are same...")
		: (a==b && b==c && c==d)
			? printf("a,b,c and d same")
			: (a==b && b==c && c==e)
				? printf("a,b,c and e same")
				: (a==b && b==d && d==e)
					? printf("a,b,d and e same")
					: (a==c && c==d && d==e)
						? printf("a,c,d and e same")
						: (b==c && c==d && d==e)
							? printf("b,c,d and e same")
							: (a==b && b==c && d==e)
								? printf("a,b,c and d,e same")
								: (a==b && b==d && c==e) 
									? printf("a,b,d and c,e same")
									: (a==b && b==e && c==d)
										? printf("a,b,e and c,d same")
										: (a==c && c==d && b==e)
											? printf("a,c,d and b==e same")
											: (a==c && c==e && b==d)
												? printf("a,c,e and b,d same")
												: (a==d && d==e && c==b)
													? printf("a,d,e and c,b same")
													: (b==c && c==d && a==e)
														? printf("b,c,d and a,e same")
														: (b==d && d==e && a==c)
															? printf("b,d,e and a,c same")
															: (b==c && c==e && a==d)
																? printf("b,c,e and a,d same")
																: (c==d && d==e && a==d)
																	? printf("c,d,e and a,d same")
																	: (a==b && b==c)
																		? printf("a,b,c same")
																		: (a==b && b==d)
																			? printf("a,b,d is same")
																			: (a==b && b==e)
																				? printf("a,b,e is same")
																				: (a==c && c==d)
																					? printf("a,c,d is same")
																					: (a==c && c==e)
																						? printf("a,c,e is same")
																						: (a==d && d==e)
																							? printf("a,d,e is same")
																							: (b==c && c==d)
																								? printf("b,c,d is same")
																								: (b==d && d==e)
																									? printf("b,d,e is same")
																									: (b==c && c==e)
																										? printf("b,c,e is same")
																										: (c==d && d==e)
																											? printf("c,d,e is same")
																											: (a==b)
																												? printf("a,b is same")
																												: (a==c)
																													? printf("a,c is same")
																													: (a==d)
																														? printf("a,d is same")
																														: (a==e)
																															? printf("a,e is same")
																															: (b==c)
																																? printf("b,c is same")
																																: (b==d)
																																	? printf("b,d is same")
																																	: (b==e)
																																		? printf("b,e is same")
																																		: (c==d)
																																			? printf("c,d is same")
																																			: (c==e)
																																				? printf("c,e is same")
																																				: (d==e)
																																					? printf("d,e is same")
																																					:(a>b)
																																						?(a>c)
																																							?(a>d)
																																								?(a>e)
																																									?printf("a is max...")
																																								:printf("e is max...")
																																							:(d>e)
																																								?printf("d is max...")
																																								:printf("e is max...")
																																						:(c>d)
																																							?(c>e)
																																								?printf("c is max...")
																																								:printf("e is max...")
																																					?(b>c)
																																						?(b>d)
																																							?(b>e)
																																								?printf("b is max...")
																																							:printf("e is max...")
																																						:printf("d is max...")
																																					:printf("c is max...");
																																							
																																									                                                                                                                
}














