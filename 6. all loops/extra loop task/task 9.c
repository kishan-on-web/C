#include <stdio.h>
 
int main()
{
    int num, temp, rev=0, digit, sum=0;
 
    printf("Enter a Number \n");
    scanf("%d",&num);
    
    
    temp = num;
 
    while(temp > 0){
        sum += temp % 10;  
        temp = temp / 10;      
    }

   temp = sum;

    while( temp > 0){
        rev = rev*10 + temp % 10; 
        temp = temp / 10;
    }
 
    if(rev*sum == num)
        printf("Magic Number \n");
    else
        printf("Not a Magic Number \n");

}
