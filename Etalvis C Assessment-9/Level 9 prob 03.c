#include <stdio.h>

int main()
{
    int arr[5],i,min;
    printf("Enter the vaules :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=1;i<5;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("min : %d",min);
}