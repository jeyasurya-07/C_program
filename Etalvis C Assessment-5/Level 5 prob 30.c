//print the hcf of two no's
#include <stdio.h>

int main()
{
    int a,b,x,y,hcf,i;
    printf("Enter value for A and B :");
    scanf("%d %d",&a,&b);
    x=a;
    y=b;
    if(b>a)
    {
        x=b;
        y=a;
    }

    for(i=2;i<y;i++)
    {
        if(x%i==0)
        {
            if(y%i==0)
            {
                hcf=i;
            }
        }
    }
    printf("%d",hcf);
}