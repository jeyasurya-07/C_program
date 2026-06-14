#include <stdio.h>

int main ()
{
    int i,j,sum=0,arr[5],a,b[5];//here we don't need two array but based on question to create new array and copy the rev
    printf("Enter number :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<5;i++)
    {
        a=0;
        for(j=arr[i];j!=0;j=j/10)
        {
            a=(j%10)+a*10;
        }
        printf("%d",a);
        b[i]=a;
        printf("%d",b[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+b[i];
    }
    printf("%d",sum);
}