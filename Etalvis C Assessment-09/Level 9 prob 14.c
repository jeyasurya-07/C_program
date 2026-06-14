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
    //printf("debug:%d\n",i);
        if(i%2==1)
        {
            printf("%d",arr[i/2]);

        }
        else
        printf("%d",(arr[(i/2)-1]+arr[i/2])/2);
    
}