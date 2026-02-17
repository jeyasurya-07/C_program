#include <stdio.h>

int main()
{
    int arr[5],i,j,n;
    printf("Enter the vaules :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    n=5;
    for(i=0;i<n;i++)
    { 
        if(arr[i]%2==1)
        {
            n--;
            for(j=i+1;j<n;j++)
            {
            arr[i]=arr[j];
            i++;
            }
        }
        i=0;
        
    }
    i=0;
    while(i<5)
    {
        printf("%d ",arr[i]);
        i++;
    }
    
}