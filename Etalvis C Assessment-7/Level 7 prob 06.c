//print odd 10-20
#include <stdio.h>

void disp_2digit_odd_below(int);
int main()
{
 int x=10;
 disp_2digit_odd_below20(x);
}

void disp_2digit_odd_below20(int x)
{
    for(x;x<20;x++)
    {
        if(x%2==1)
        {
            printf("%d\n",x);
        }
        
    }
}