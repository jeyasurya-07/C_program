//reverse a number from any range
#include <stdio.h>

int main()
{
    int x,y=1,z=0,i,dig=0;
    printf("Enter number :");
    scanf("%d",&x);
    i=x;
    count:if(i!=0)
    {
        dig++;
        i=i/10; 
        goto count;
    }
    power:if(dig>1)
    {
        y=10*y;
        dig--;
        goto power;
    }

       

    loop: if(x!=0)
         {
           z=(x%10)*y+z;
           x=x/10;
           y=y/10;
           goto loop;
        
         }
     printf("%d",z);
}