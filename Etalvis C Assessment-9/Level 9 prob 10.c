#include <stdio.h>

int main()
{
    int arr[5],b[5],i,j=0,k,l=0;
    printf("Enter the vaules :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<5;i++)
    { 
        k=1;
        if(arr[i]>1)
        {
            for(j=2;j<=arr[i]/2;j++)
            {
                if(arr[i]%j==0)
                {
                    k=0;
                    break;
                }
            }    
            if(k==1)
            {
                b[l]=arr[i];
                l++;
            }    
        }
        }
        
    for(i=0;i<l;i++)
    {
        printf("%d ",b[i]);
    }
    
}