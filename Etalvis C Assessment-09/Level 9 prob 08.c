#include <stdio.h>

int main()
{
    int arr[5],b[5],i,j=0;
    printf("Enter the vaules :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<5;i++)
    { 
        if(arr[i]%2==0)
        {
           b[j]=arr[i];
            j++;
                
            }
        }
        
    for(i=0;i<j;i++)
    {
        printf("%d ",b[i]);
    }
    
}