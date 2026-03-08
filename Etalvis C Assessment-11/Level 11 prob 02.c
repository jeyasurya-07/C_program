#include <stdio.h>

int fun(int *, int);
int main()
{
    int arr[20],i,x;
    printf("Enter the digit of input :");
    scanf("%d",&x);
    printf("Enter the number :");
    for(i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    fun(arr,x);
    printf("after incremented\n");
    for(i=0;i<x;i++)
    {
        printf("%d\n",arr[i]);
    }
}

int fun(int * ptr, int x)
{
    int i;
    for(i=0;i<x;i++)
    {
        (*ptr)++;
        ptr++;
    }
    
}