//print lcm for two numbers
#include <stdio.h>

int main ()
{
    int a,b,x,y,i,j=1,lcm=0;
    
    x=a;
    y=b;

   
        
        for(i=1;j%y!=0;i++)
        {
            j=x*i;
            if(j%y==0)
            {
                lcm=j;
            
            }
        }


    
    printf("%d",lcm);
    
    
}