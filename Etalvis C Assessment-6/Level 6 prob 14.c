#include <stdio.h>
int main ()
{
    int x,y,z=1,i=1,count=0;
    printf("Enter number:");
    scanf("%d",&x);
    y=x;
    while(y!=0)
    {
        y=y/10;
        count++;
    }
    while(i<count)
    {
    
        z=z*10;
        i++;
    }
    i=x%10;
    i=i*z;
    x=x/10;
    z=z/10;
    y=(x%z)*10;
    x=x/z;
    x=x+y+i;
    printf("%d",x);
}