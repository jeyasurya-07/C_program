//sub 1 from msb if its odd else print same
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


    i=x%y;
    x=x/y;
    if(x%2==1)
    x=x-1;


    
    printf("%d",(x*y)+i);
}
