#include <stdio.h>

int main()
{
    int i,j,a,b,k,hcf;
    printf("Enter value of A and B :");
    scanf("%d %d",&a,&b);
    i=a;
    j=b;
    if(b>a)
    {
        i=b;
        j=a;
    }
    k=1;
    while(k<=j)
    {
        if(i%k==0)
        {
            if(j%k==0)
            {
                hcf=k;
            }
        }
        k++;
    }
    printf("%d",hcf);
}