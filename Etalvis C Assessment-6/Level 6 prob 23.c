#include <stdio.h>
int main ()
{
    int x,i,j,k,count=0;
    printf("Enter number:");
    scanf("%d",&x);
    while(x!=0)
    {
       i=x%10;
       j=1;
       while(j<=i)
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