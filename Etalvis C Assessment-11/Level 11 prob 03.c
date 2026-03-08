#include <stdio.h>

int arrange_ascend(int *);
int main ()
{
   int arr[5],i;
   arrange_ascend(arr);

   for(i=0;i<5;i++)
   {
    printf("%d\n",arr[i]);
   }
}

int arrange_ascend(int *ptr)
{
    int i;
    for(i=0;i<5;i++)
    {
        ptr[i]=i+1;
    }
}