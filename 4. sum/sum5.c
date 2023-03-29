#include<stdio.h>

main()
{
	int d;
 	int x=5, y=3 ,z=7;
	
	z = (x*x*x) + (y*y*y) + (z*z*z) + (3*x*x*y) + (3*x*y*y) + (3*x*x*z) + (3*x*z*z) + (3*y*z*z) + (3*y*y*z) + (6*x*y*z);
	
	printf("z =  %d", z);
}
