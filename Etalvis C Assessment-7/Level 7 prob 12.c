//sum the digits of num
#include <stdio.h>

void disp_sum_all_digit(int);
int main()
{
 int x;
 printf("Enter number:");
 scanf("%d",&x);
 disp_sum_all_digit(x);
}

void disp_sum_all_digit(int x)
{
    int i,sum=0;
    for(x;x!=0;x=x/10)
    {
        i=x%10;
        sum=sum+i;
        
    }
    printf("%d",sum);
}