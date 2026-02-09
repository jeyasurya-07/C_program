//sum of numbers upto 5
#include <stdio.h>

int main()
{
    int x,y=0;
    x=1;

    loop: if(x<6)
    {
    y=y+x;
    x++;
   
        goto loop;
        
    }
     printf("%d",y);
}