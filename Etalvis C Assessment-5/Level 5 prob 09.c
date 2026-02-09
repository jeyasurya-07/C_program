//print sum of two dig numbers whose 1st dig is 5
#include <stdio.h>

int main ()
{
    int x,y,sum=0;

    for(x=10;x<=99;x++)
    {
        y=x%10;
        if(y==5)
        {
            sum=sum+x;
            
        }

    }
    printf("%d\n",sum);
    
}