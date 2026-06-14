#include <stdio.h>
int main ()
{
    int x,i,j,k,count=0;
    printf("Enter number:");
    scanf("%d",&x);
    while(x>9)
    {
       i=x%100;
       j=4;
       while(j<=i/2)
       {
        k=j*j;
        if(i==k)
        {
            count++;
        }
        j++;
       }
       x=x/10;
    }
    printf("%d",count);
}