#include<stdio.h>

int fect(int a)
{
	if(a>1){
		return a * fect(a-1); 
	}	
	else {
		return 1;
	}
}

void main()
{
	int n,t;
	
	printf("enter the value : ");
	scanf("%d",&n);
		
	t = fect(n);
	
	printf("%d",t);
}
