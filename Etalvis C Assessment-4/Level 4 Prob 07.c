//print  2 digit odd numbers if their sum is 7
#include <stdio.h>

int main()
{
    int x,y;
    x=10;

    loop: if(x<100)
    {
    if(x%2==1)
    {
        y=(x%10)+(x/10);
        
        if(y==7)
        printf("%d\n",x);

    }
    x++;

        goto loop;
    }
}