//print two digit odd whose sum is 6
#include <stdio.h>

void disp_2digit_even_sum6(int);
int main()
{
 int x=10;
 disp_2digit_even_sum6(x);
}

void disp_2digit_even_sum6(int x)
{
    int i,j;
    for(x;x<100;x++)
    {
        if(x%2==0)
        {
            i=x%10;
            j=x/10;
            if(i+j==6)
            {
            printf("%d\n",x);
            }
        }
        
    }
}