#include <stdio.h>

int main ()
{
    int i=10,x,y;
    while (i<100)
    {
        if(i%2==1)
        {
            x=i%10;
            y=i/10;
            if(x+y==7)
            {
            printf("%d\n",i);
            }
        }
        i++;
    }
    
}