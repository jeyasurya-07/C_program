#include <stdio.h>

int disp_lcm3(int,int,int);
int main()
{
    int x,y,z,a;
    printf("Enter value of x,y,z :");
    scanf("%d %d %d",&x,&y,&z);

    a=disp_lcm3(x,y,z);
    printf("%d",a);
}

int disp_lcm3(int x,int y,int z)
{
    int i,j,lcm=0;
    for(i=1;lcm==0;i++)
    {
        j=y*i;
        if(j%x==0)
        {
            if(j%z==0)
            {
            lcm=j;
            }
        }
    }
    return lcm;
}