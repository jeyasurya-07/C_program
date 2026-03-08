#include <stdio.h>

int memcopy(int *, int *,int);
int main()
{
    int src[10],dest[10],size,i,k=0;
    printf("Enter the size :");
    scanf("%d",&size);
    printf("enter the 1st arr values :");
    for(i=0;i<size;i++)
    {
        scanf("%d",&src[i]);
    }
    printf("enter the 2nd arr values :");
     for(i=0;i<size;i++)
    {
        scanf("%d",&dest[i]);
    }
  
    if(memcopy(src,dest,size))
    {
        printf("Success");

    }
    else
        printf("Failure");
   
}

int memcopy(int * src, int*dest, int size)  // alter method memcpy(dest,src,num of dig*size of int)
{
    int i;
    for(i=0;i<size;i++)
    {
       if(dest[i]!=src[i])
       {
        return 0;
       }
       
    }
    return 1;

}