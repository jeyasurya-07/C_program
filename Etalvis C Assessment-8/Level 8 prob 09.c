#include <stdio.h>

int check_last_digit_odd(int);
int main ()
{
    int x,y;
    printf("Enter the number :");
    scanf("%d",&x);
    y=check_last_digit_odd(x);
    printf("%d",y);
    
}

int check_last_digit_odd(int x)
{

    int i,j,y=1,k;

    for(i=x;i>=10;i=i/10)
    {
        y=y*10;
    }
    j=x/y;
    if(j%2==1)
    {
        j=(j-1)*y;
        i=x%y;
        k=i+j;
    }
    else
    k=x;

      return k;
    
}