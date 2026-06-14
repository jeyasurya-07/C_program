//print sum of 6-1
#include <stdio.h>

void disp_rsum(int);
int main()
{
 int x=6;
 disp_rsum(x);
}

void disp_rsum(int x)
{
    int sum=0;
    for(x;x>0;x--)
    {
       sum=sum+x;
    }
    printf("%d",sum);
}