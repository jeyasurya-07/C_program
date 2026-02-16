#include <stdio.h>

int disp_sum(int);
int main ()
{
    int x=1,y;
    y=disp_sum(x);
    printf("%d",y);
    
}

int disp_sum(int x)
{
    int sum=0;
       for(x;x<=5;x++)
       {
        sum=sum+x;
       }
       return sum;
    
}