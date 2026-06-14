//count the digits of num
#include <stdio.h>

void disp_count_total_digits(int);
int main()
{
 int x;
 printf("Enter number:");
 scanf("%d",&x);
 disp_count_total_digits(x);
}

void disp_count_total_digits(int x)
{
    int count=0;
    for(x;x!=0;x=x/10)
    {
        count++;
        
    }
    printf("%d",count);
}