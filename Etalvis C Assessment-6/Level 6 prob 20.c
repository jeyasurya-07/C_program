#include <stdio.h>

int main()
{
    int i,j,k,count=0;
    i=2;
    if(i==2)
    {
        count++;
        i++;
    }
    if(i==3)
    {
        count++;
        i++;
    }
    while(i<10)
    {
          j=2;
          k=1;
          while(j<=i/2)
          {
            
            if(i%j==0)
            {
                k=0;
            }
            j++;
          }
    
    if(k==1)
    {
        count++;
    }
    i++;
}
printf("%d",count);
    
}