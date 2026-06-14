#include <stdio.h>

int disp_single_digit_prime(int);
int main()
{
    int x,y;
    printf("Enter number :");
    scanf("%d",&x);
    y=disp_single_digit_prime(x);
    printf("%d",y);
}

int disp_single_digit_prime(int x)
{
    int i,j,k,prime=0,count=0;
    for(i=x;i!=0;i=i/10)
    {
        j=i%10;
        if(j>1)
        {
        prime=1;
       for(k=2;k<=j/2;k++)
       {
        if(j%k==0)
        {
            prime=0;
            break;
        }
       }
       if(prime==1)
       {
        count++;
       }
    }
    }
    return count;
}