//print 5-1 using fun
#include <stdio.h>

void disp_descend(int);
int main()
{
 int x=5;
 disp_descend(x);
}

void disp_descend(int x)
{
    for(x;x>0;x--)
    {
        printf("%d\n",x);
    }
}