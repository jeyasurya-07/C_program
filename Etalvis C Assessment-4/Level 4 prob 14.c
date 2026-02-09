//interchange the first and last bit of any number
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
    z=x%10;
    z=z*y;
    y=y/10;
    x=x/10;
    i=(x%y)*10;
    x=x/y;
    z=z+i+x;
    
     printf("%d",z);
}