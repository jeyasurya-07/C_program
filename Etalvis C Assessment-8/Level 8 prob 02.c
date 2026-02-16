#include <stdio.h>

int disp_rsum(int);
int main ()
{
    int x=6,y;
    y=disp_rsum(x);
    printf("%d",y);
    
}

int disp_rsum(int x)
{
    int sum=0;
       for(x;x>0;x--)
       {
        sum=sum+x;
       }
       return sum;
    
}