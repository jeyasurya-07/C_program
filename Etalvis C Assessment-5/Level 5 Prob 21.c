//count and print total number of single digit odd no's 
#include <stdio.h>

int main()
{
    int x,i,y,count=0;
    printf("Enter number :");
    scanf("%d",&x);

    for(i=x;i>0;i=i/10)
    {
        y=i%10;
        if(y%2==1)
        {
            count++;
        }
    }
    printf("%d",count);
}