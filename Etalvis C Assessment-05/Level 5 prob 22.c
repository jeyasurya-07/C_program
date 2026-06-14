//count and print total number of two dig odd no's 
#include <stdio.h>

int main()
{
    int x,i,y,count=0;
    printf("Enter number :");
    scanf("%d",&x);

    for(i=x;i>10;i=i/10)
    {
        y=i%100;
        if(y%2==1)
        {
            count++;
        }
    }
    printf("%d",count);
}