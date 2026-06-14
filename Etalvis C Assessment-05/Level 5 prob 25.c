//print the total number of digits as prime number
#include <stdio.h>

int main()
{
    int x,y,i,j,k,count=0;
    printf("Enter number :");
    scanf("%d",&x);

    for(i=x;i>0;i=i/10)
    {
        k=1;
        y=i%10;
        
        
        for(j=2;j<=y/2;j++)
        {
        if(y%j==0)
        {
            k=0;
        }
        }
        if(y>1)
        {
        if(k==1)
        {
            count++;
        }
        }
        
    }
    printf("%d",count);
}