#include <stdio.h>

int memcopy(int *, int *,int);
int main()
{
    int src[10],dest[10],size,i;
    printf("Enter the size :");
    scanf("%d",&size);
    printf("enter the values :");
    for(i=0;i<size;i++)
    {
        scanf("%d",&src[i]);
    }
    memcopy(src,dest,size);
    for(i=0;i<size;i++)
    {
        printf("%d\n",dest[i]);
    }
}

int memcopy(int * src, int*dest, int size)  // alter method memcpy(dest,src,num of dig*size of int)
{
    int i;
    for(i=0;i<size;i++)
    {
        dest[i]=src[i];
    }

}