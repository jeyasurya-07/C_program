#include <stdio.h>

int main()
{
    int arr[100],i;
    printf("Enter number :");
    for(i=0;i<100;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==0)
        break;
    }
    if(i==4)
    {
        if(arr[0]==arr[3])
        {
            printf("Success");

        }
        else
        printf("failure");
    }
}