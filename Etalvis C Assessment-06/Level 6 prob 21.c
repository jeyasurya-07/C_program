#include <stdio.h>
int main ()
{
    int x,i,count=0;
    printf("Enter number:");
    scanf("%d",&x);
    while(x!=0)
    {
       i=x%10;
       if(i%2==1)
       {
        count++;
       }
       x=x/10;
    }
    printf("%d",count);
}