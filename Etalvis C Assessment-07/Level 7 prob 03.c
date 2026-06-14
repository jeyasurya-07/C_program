//print sum of 1-5
#include <stdio.h>

void disp_sum(int);
int main()
{
 int x=1;
 disp_sum(x);
}

void disp_sum(int x)
{
    int sum=0;
    for(x;x<6;x++)
    {
        sum=sum+x;
    }
    printf("%d",sum);
}