//print two dig num whose sum of dig is 7
#include <stdio.h>

void disp_2digit_odd_sum7(int);
int main()
{
 int x=10;
 disp_2digit_odd_sum7(x);
}

void disp_2digit_odd_sum7(int x)
{
    int i,j;
    for(x;x<100;x++)
    {
        if(x%2==1)
        {
            i=x%10;
            j=x/10;
            if(i+j==7)
            {
            printf("%d, ",x);
            }
        }
        
    }
}