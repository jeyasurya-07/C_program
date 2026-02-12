//check prime or not
#include <stdio.h>

void check_first_2digits_prime(int);
int main()
{
 int x;
 printf("Enter number:");
 scanf("%d",&x);
 check_first_2digits_prime(x);
}

void check_first_2digits_prime(int x)
{
    x=x%100;
    int i,j=1;
    if(x<2)
    printf("Not prime");
    else{
    for(i=2;i<x/2;i++)
    {
        if(x%i==0)
        {
            j=0;
        }
        
    }
    if(j==0)
    {
    printf("Not prime");
    }
    else
    printf("Prime");
}
}