//interchange 1st and last digit
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
    i=(x%10)*y;
    x=x/10;
    y=y/10;
    z=(x%y)*10;
    x=x/y;
    x=i+z+x;
    
    printf("%d",x);
}
