//print odd numbers upto 10
#include <stdio.h>

int main()
{
    int x;
    x=1;

    loop: if(x<10)
    {
    if(x%2==1)
    printf("%d\n",x);
    
    x++;

        goto loop;
    }
}