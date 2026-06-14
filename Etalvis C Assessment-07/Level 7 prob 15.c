//if first digit is odd then sub 1 wih msb
#include <stdio.h>

void check_last_digit_odd(int);
int main()
{
 int x;
 printf("Enter number:");
 scanf("%d",&x);
 check_last_digit_odd(x);
}

void check_last_digit_odd(int x)
{
    int i,j,k=1;
   
    for(j=x;j>=10;j=j/10)
    {
        k=k*10;
        
    }
    i=x%k;
    x=x/k;
    if(x%2==1)
    {
        x=x-1;
    }
    j=(x*k)+i;
    printf("%d",j);
}