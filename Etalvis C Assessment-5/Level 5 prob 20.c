//count and print single digit prime number
#include <stdio.h>

int main ()
{
    int y=0,i,j,x=0,count=0;
  
    for(i=x;i<10;i++)
    {
        if(x>1)
        {
         y=0;
        for(j=2;j<=i/2;j++)
        {
           
            if(i%j==0)
            {
                y=1;
            }


        }
        if(y==0)
        {
            count++;
        }
    }
    else
    x++;

    }
  
    printf("%d",count);
    

  
  
}