#include <stdio.h>

int main()
{
    int x,j=0,i;

    printf("Enter number :");
    scanf("%d",&x);
    i=2;
    while(i<=x/2)
    {
        if(x%i==0)
        {
            j=1;
        }
        i++;
    }
    if(j==1)
    {
        printf("Not prime");

    }
    else
    printf("Prime");
}