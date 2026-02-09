//sum of 2 digit odd numbers whose 10's is 7
#include <stdio.h>

int main()
{
    int x,y=0;
    x=70;

    loop: if(x<80)
    {
    if(x%2==1)
    y=y+x;
    x++;
   
        goto loop;
        
    }
     printf("%d",y);
}