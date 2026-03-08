#include <stdio.h>

int * intcon(int *,int , int*, int ,int *);
int main()
{
    int src1[10],src2[10],dst[20];
    int size1,size2,i;
    printf("Enter the size of 1st array :");
    scanf("%d",&size1);
    printf("Enter the 1st array :");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&src1[i]);
    }
    printf("Enter the size of 2nd array :");
    scanf("%d",&size2);
    printf("Enter the 1st array :");
    for(i=0;i<size2;i++)
    {
        scanf("%d",&src2[i]);
    }
    intcon(src1,size1,src2,size2,dst);


}

int * intcon(int*src1,int size1,int * src2,int size2,int*dst)
{
    int i,j=0, x=size1+size2;
    for(i=0;i<x;i++)
    {
        if(i<size1)
        {
           
            dst[i]=src1[i];
            
        }
        else
        {
        dst[i]=src2[j];
        j++;   
        }
    }

    for(i=0;i<x;i++)
    {
        printf("%d\n",dst[i]);
    }
}

