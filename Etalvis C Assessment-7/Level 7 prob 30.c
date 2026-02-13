//find lcm of two no's
#include <stdio.h>

void disp_count_HCF2(int,int);
int main()
{
 int x,y;
 printf("Enter value for A and B :");
 scanf("%d %d",&x,&y);
 disp_count_HCF2(x,y);
}

void disp_count_HCF2(int x,int y)
{
    
    int a=x,b=y,hcf,i;

    if(y>x)
    {
        a=y;
        b=x;
    }
    for(i=2;i<b;i++)
    {
        if(a%i==0)
        {
            if(b%i==0)
            {
            hcf=i;
            }
        }

    }
    printf("%d",hcf);

}