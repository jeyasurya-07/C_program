#include <stdio.h>

int main()
{
    int arr[100],i,j,k,b[100],temp;
    printf("Enter number :");
    for(i=0;i<100;i++)
    {
        scanf("%d",&arr[i]);
        b[i]=arr[i]+i;
        if(arr[i]==0)
        break;
    }
   
    for(j=0;j<i-1;j++)
    {
        for(k=j+1;k<i;k++)
        {
            if(b[j]>b[k])
            {
                temp=b[j];
                b[j]=b[k];
                b[k]=temp;
            }
        }
    }
    for(j=0;j<i;j++)
    {
        printf("%d",b[j]);
    }
   
}