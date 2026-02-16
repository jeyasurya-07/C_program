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
    int i,j,lcm=0;
    for(i=1;lcm==0;i++)
    {
        j=y*i;
        if(j%x==0)
        {
            lcm=j;
        }
    }
    return lcm;
}