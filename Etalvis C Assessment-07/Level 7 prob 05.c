//print odd 1-9
#include <stdio.h>

void disp_odd(int);
int main()
{
 int x=1;
 disp_odd(x);
}

void disp_odd(int x)
{
    for(x;x<10;x++)
    {
        if(x%2==1)
        {
            printf("%d\n",x);
        }
        
    }
}