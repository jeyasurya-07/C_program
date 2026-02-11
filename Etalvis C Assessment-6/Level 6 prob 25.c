#include <stdio.h>
int main ()
{
    int x,i,j,k,count=0;
    printf("Enter number:");
    scanf("%d",&x);
    while(x!=0)
    {
       i=x%10;
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
       if(i>0)
       {
        if(k==1)
        count++;
       }
       x=x/10;

    }
    printf("%d",count);
}