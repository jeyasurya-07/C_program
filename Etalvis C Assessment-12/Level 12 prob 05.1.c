// multiplication using integer array "not an etalvis question"
#include <stdio.h>
#include <stdlib.h>

void getfun(int*,int*,int,int);
void mulfun(int*,int*,int*,int,int);
int main() {
    int * arr1,*arr2,*res,n,m,i,start=0;
    printf("Enter the number of values in arr1 : ");
    scanf("%d",&n);
    printf("Enter the number of values in arr2 : ");
    scanf("%d",&m);
    arr1=malloc(n*sizeof(int));
    arr2=malloc(m*sizeof(int));
    res=malloc((n+m)*(sizeof(int)));
     getfun(arr1,arr2,n,m);
     mulfun(arr1,arr2,res,n,m);
     for(i=(n+m)-1;i>=0;i--)
     {
       if(start==0 && res[i]==0)
       {
         if(i==0 && res[i]==0)
         printf("%d",res[i]);
         
       }
       else{
         start=1;
    printf("%d ",res[i]);
}
}
}

void getfun(int * arr1,int *arr2,int n,int m)
{
    int i;
    printf("Enter the arr1 values:");
    for(i=n-1;i>=0;i--)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the arr2 values:");
    for(i=m-1;i>=0;i--)
    {
        scanf("%d",&arr2[i]);
    }
    
}

void mulfun(int * arr1,int * arr2,int * res,int n,int m)
{
    int i,j,carry=0;
    for(i = 0; i < n + m; i++)
        res[i] = 0;
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            res[i+j]+=(arr2[j]*arr1[i]);
        }
    }
    for(i=0;i<(n+m)-1;i++)
    {
        carry=res[i]/10;
        res[i]=res[i]%10;
        res[i+1]+=carry;
    }
}






