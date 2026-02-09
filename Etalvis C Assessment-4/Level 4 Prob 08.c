//print  2 digit even numbers if their sum is 6
#include <stdio.h>

int main()
{
    int x,y;
    x=10;

    loop: if(x<100)
    {
    if(x%2==0)
    {
        y=(x%10)+(x/10);
        
        if(y==6)
        printf("%d\n",x);

    }
    x++;

        goto loop;
    }
}

//9th question is same as this