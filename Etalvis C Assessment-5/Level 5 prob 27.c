//print total count of numbers under 100000 whose sum of digit is 14
#include <stdio.h>

int main()
{
    int i,j,y,sum=0,count=0;

    for(i=10;i<100000;i++)
    {
        sum=0;
        for(j=i;j>0;j=j/10)
        {
            y=j%10;
            sum=sum+y;
        }
        if(sum==14)
        {
            count++;
        }
    }
    printf("%d",count);
}