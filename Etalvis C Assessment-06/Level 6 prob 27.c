#include <stdio.h>
int main ()
{
    int x=10,sum,i,j,count=0;
    
    while(x<100000)
    {
        j=x;
        sum=0;
        while(j>0)
        {
            i=j%10;
            sum=sum+i;
        
        
        j=j/10;

        }
        if(sum==14)
        {
            count++;
        }
    
    x++;
    }
    printf("%d",count);
   
}