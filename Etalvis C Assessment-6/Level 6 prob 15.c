#include <stdio.h>
int main ()
{
    int x,y,z=1,i,count=0;
    printf("Enter number:");
    scanf("%d",&x);
    y=x;
    while(y!=0)
    {
        y=y/10;
        count++;
    }
    i=1;
    while(i<count)
    {
    
        z=z*10;
        i++;
    }
   i=x%z;
   x=x/z;
   if(x%2==1)
   {
    x=x-1;
   }
    printf("%d",(x*z)+i);
}