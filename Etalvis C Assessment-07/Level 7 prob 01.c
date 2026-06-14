//print 1-5 using function
#include <stdio.h>

void disp_assend(int);
int main()
{
    int x=1;
    disp_assend(x);
}

void disp_assend(int x)
{
    for(x;x<=5;x++)
    {
        printf("%d\n",x);
        
    }
}