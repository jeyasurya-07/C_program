#include <stdio.h>

int main ()
{
    int i=10,x,y=0;
    while (i<100)
    {
       if(i%2==1)
       {
        x=i/10;
        if(x==7)
        {
            y=y+i;
        }
       }
        i++;
    }
    printf("%d",y);
    
}