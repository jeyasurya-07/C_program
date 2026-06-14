//check the MSB bit and if its even print same
#include <stdio.h>

int main()
{
    int x,y=1,z,i,count=0;
    printf("Enter number :");
    scanf("%d",&x);
    i=x;
    digit:if(i!=0)
    {
        count++;
        i=i/10; 
        goto digit;
    }
    power:if(count>1)
    {
        y=10*y;
        count--;
        goto power;
    }
    z=x/y;
    if(z%2==1)
    {
        z=z-1;

        z=z*y;
        y=x%y;
        z=z+y;
    
     printf("%d",z);
    }

    else
    printf("%d",x);
    

    
}