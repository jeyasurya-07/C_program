//print sum of 2 dig num whose one's is 5    
#include <stdio.h>

void disp_2digit_ones5(int);
int main()
{
 int x=10;
 disp_2digit_ones5(x);
}

void disp_2digit_ones5(int x)
{
    int i,sum=0;
    for(x;x<100;x++)
    {
        
        
            i=x%10;
            if(i==5)
            {
                sum=sum+x;
            }
        
        
    }
    printf("%d",sum);
}