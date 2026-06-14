//sum of num 6-1
#include <stdio.h>

int main()
{
    int x,y=0;
    x=6;

    loop: if(x>0)
    {
    y=y+x;
    x--;

        goto loop;
    }
       printf("%d\n",y);
}