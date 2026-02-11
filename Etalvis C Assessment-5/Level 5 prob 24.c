//print the total number of double digit perfect square
#include <stdio.h>

int main()
{
    int x,y,i,j,count=0;
    printf("Enter number :");
    scanf("%d",&x);

    for(i=x;i>10;i=i/10)
    {
        y=i%100;
        for(j=1;j<10;j++)
        {
            if(y==j*j)
            {
                count++;
            }
        }
    }
    printf("%d",count);
}