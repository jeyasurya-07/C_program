#include <stdio.h>

int main()
{
    int x,i,j=0;
    printf("Enter number :");
    scanf("%d",&x);
    x=x%100;
    i=2;
    while(i<x/2)
    {
        if(x%i==0)
        {
            j=1;
        }
     i++;   
    }
    if(j==1)
    {
        printf("Not Prime");
    }
    else
    printf("prime");
}