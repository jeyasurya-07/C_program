#include <stdio.h>

int disp_2digit_ones5(int);
int main ()
{
    int x=10,y;
    y=disp_2digit_ones5(x);
    printf("%d",y);
    
}

int disp_2digit_ones5(int x)
{
    int sum=0,i;
       for(x;x<100;x++)
       {
        i=x%10;
        if(i==5)
        {
        sum=sum+x;
        }
    }

       return sum;
    
}