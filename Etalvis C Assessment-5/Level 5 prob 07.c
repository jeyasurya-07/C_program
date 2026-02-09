//print two dig odd numbers whose sum is 7
#include <stdio.h>

int main ()
{
    int x,y,z;

    for(x=10;x<=99;x++)
    {
        if(x%2==1)
        {
            y=x%10;
            z=x/10;
            if(y+z==7)
            {
            printf("%d\n",x);
            }
        }

    }
    
}