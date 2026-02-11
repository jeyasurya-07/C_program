#include <stdio.h>
int main ()
{
    int x,i,count=0;
    printf("Enter number:");
    scanf("%d",&x);
    while(x>9)
    {
       i=x%100;
       if(i%2==1)
       {
        count++;
       }
       x=x/10;
    }
    printf("%d",count);
}