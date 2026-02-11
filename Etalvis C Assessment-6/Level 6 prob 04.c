#include <stdio.h>

int main ()
{
    int i=6,sum=0;
    while (i>0)
    {
        sum=sum+i;
        i--;
    }
    printf("%d",sum);
}