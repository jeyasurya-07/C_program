//print  2 digit odd numbers upto 20
#include <stdio.h>

int main()
{
    int x;
    x=11;

    loop: if(x<20)
    {
    if(x%2==1)
    printf("%d\n",x);
    
    x++;

        goto loop;
    }
}