#include <stdio.h>

int disp_2digit_even_sum6(int);
int main ()
{
    int x=2,y;
    y=disp_2digit_even_sum6(x);
    printf("%d",y);
    
}

int disp_2digit_even_sum6(int x)
{

    int i,k,count=0;
    
    for(x;x<10;x++)
    {
        k=1;
       for(i=2;i<=x/2;i++)
       {
        if(x%i==0)
        {
            k=0;
        }
       
        }
        if(k!=0)
        {
            count++;
        }
    }

      return count;
    
}