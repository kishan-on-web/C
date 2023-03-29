#include<stdio.h>

main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10,};
	int i, sumeven = 0, sumodd = 0;
	
	for(i=0; i<10; i++)
	{
		if(i%2==0)
		{
			sumeven = sumeven + a[i];
		}
		else 
		{
			sumodd = sumodd + a[i];	
		}
	}
	printf("%d",sumeven); 
	
}
