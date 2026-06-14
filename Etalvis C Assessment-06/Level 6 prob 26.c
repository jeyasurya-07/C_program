#include <stdio.h>
int main ()
{
    int x,k=0;
    x=1000;
    while(x<10000)
    {
      if(x%7==0)
      {
        if(x%9==0)
        {
            k=x;
        }
      } 
      x++;
    }
    printf("%d",k);
   
}