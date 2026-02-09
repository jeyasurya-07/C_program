//reverse a num
#include <stdio.h>

int main ()
{
    int x,z=0,i,y=1,count=0;
    printf("Enter number : ");
    scanf("%d",&x);

    for(i=x;i>0;i=i/10)
    {
        count++;
    }
    for(i=1;i<count;i++)
    {
        y=10*y;
    }
    for(i=x;i>0;i=i/10)
    {
        z=((i%10)*y)+z;
        y=y/10;
    }
    printf("%d",z);
    
}