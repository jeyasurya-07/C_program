#include <stdio.h>

int disp_lcm2(int,int);
int main()
{
    int x,y,z;
    printf("Enter value of x and y :");
    scanf("%d %d",&x,&z);

    y=disp_lcm2(x,z);
    printf("%d",y);
}

int disp_lcm2(int x,int y)
{
    int i,j,hcf=0;
    for(i=x;i>=1;i--)
    {
       
        if(x%i==0)
        {
            if(y%i==0)
            {
            hcf=i;
            break;
            }
        }
    }
    return hcf;
}