#include <stdio.h>

int disp_2digit_odd_sum_tens7(int);
int main ()
{
    int x=10,y;
    y=disp_2digit_odd_sum_tens7(x);
    printf("%d",y);
    
}

int disp_2digit_odd_sum_tens7(int x)
{
    int sum=0,i;
       for(x;x<100;x++)
       {
        if(x%2!=0)
        {
        i=x/10;
        if(i==7)
        {
        sum=sum+x;
        }
        }   
    }

       return sum;
    
}