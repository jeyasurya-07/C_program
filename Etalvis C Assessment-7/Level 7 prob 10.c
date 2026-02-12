//print odd whose tens are 7
#include <stdio.h>

void disp_2digit_odd_sum_tens7(int);
int main()
{
 int x=10;
 disp_2digit_odd_sum_tens7(x);
}

void disp_2digit_odd_sum_tens7(int x)
{
    int i,sum=0;
    for(x;x<100;x++)
    {
        if(x%2==1)
        {
            i=x/10;
            
            if(i==7)
            {
                sum=sum+x;
            }
        }
        
    }
    printf("%d",sum);
}