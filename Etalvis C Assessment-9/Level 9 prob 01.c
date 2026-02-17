#include <stdio.h>

int main()
{
    int arr[5],i,sum=0;
    printf("Enter the vaules :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d",sum);
}