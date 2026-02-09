//print 1-9 odd numbers
#include <stdio.h>

int main ()
{
    int x;

    for(x=0;x<=9;x++)
    {
        if(x%2==1)
        {
            printf("%d\n",x);
        }
    }
    
}