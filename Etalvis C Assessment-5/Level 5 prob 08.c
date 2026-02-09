//print two dig even numbers whose sum is 6
#include <stdio.h>

int main ()
{
    int x,y,z;

    for(x=10;x<=99;x++)
    {
        if(x%2==0)
        {
            y=x%10;
            z=x/10;
            if(y+z==6)
            {
            printf("%d\n",x);
            }
        }

    }
    
}