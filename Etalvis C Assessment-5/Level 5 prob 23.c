//print the total number of single digit perfect square
#include <stdio.h>

int main()
{
    int x,y,i,j,count=0;
    printf("Enter number :");
    scanf("%d",&x);

    for(i=x;i>0;i=i/10)
    {
        y=i%10;
        for(j=1;j<4;j++)
        {
            if(y==j*j)
            {
                count++;
            }
        }
    }
    printf("%d",count);
}