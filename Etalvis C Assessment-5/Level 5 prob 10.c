//print sum of two dig numbers whose 10st dig is 7
#include <stdio.h>

int main ()
{
    int x,y,sum=0;

    for(x=10;x<=99;x++)
    {
        if(x%2==1)
        {
            y=x/10;
        if(y==7)
        {
            sum=sum+x;
            
        }
        }
    }
    printf("%d\n",sum);
    
}