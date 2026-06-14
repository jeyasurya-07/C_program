//goto stmt program 54321
#include <stdio.h>

int main()
{
    int x;
    x=5;

    loop: if(x>0)  //x!=0
    {
    printf("%d\n",x);
    x--;

        goto loop;
    }
}