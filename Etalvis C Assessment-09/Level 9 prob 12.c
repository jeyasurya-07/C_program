#include <stdio.h>

int main()
{
    int arr[100],i,j,count=0,sum=0;
    printf("Enter number :");
    for(i=0;i<100;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==0)
        break;
    }

    for(j=0;j<i;j++)
    {
        count++;
        sum=arr[j]+sum;
    }
    printf("Count :%d, Sum :%d",count,sum);
}