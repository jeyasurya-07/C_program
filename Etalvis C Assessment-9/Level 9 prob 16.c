#include <stdio.h>

int main ()
{
    int i,j,k,a[50],b[50],c[51],l;
    printf("Enter value for 1st :");
    for(i=0;i<50;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            break;
        }
    }
    printf("Enter value for 2nd :");
    for(j=0;j<50;j++)
    {
        scanf("%d",&b[j]);
        if(b[j]==0)
        {
            break;
        }
    }
    if(i>j)
    k=i-1,l=i;
    else
    k=j-1,l=j;

    i=i-1,j=j-1;
    
    

    for(k;k>=0;k--)
    {
        while(i>=0||j>=0)
        {
          if(i>=0&&j>=0)
          {
            c[k]=a[i]+b[j];
            i--;
            j--;
            break;
          }
          if(j>=0)
          {
            c[k]=b[j];
            j--;
          }
          if(i>=0)
          {
            c[k]=a[i];
            i--;
          }
          break;
        }
    }
    for(i=0;i<l;i++)
    {
        printf("%d ",c[i]);
    }

}