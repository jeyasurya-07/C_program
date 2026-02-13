//find lcm of three no's
#include <stdio.h>

void disp_LCM3(int,int,int);
int main()
{
 int x,y,z;
 printf("Enter value for x, y and z :");
 scanf("%d %d %d",&x,&y,&z);
 disp_LCM3(x,y,z);
}

void disp_LCM3(int x,int y,int z)
{
    int k=1,j=1,lcm=0;
    for(x;lcm==0;k++)
    {
        j=x*k;
        if(j%y==0)
        {
            if(j%z==0)
            {
            lcm=j;
            
            }
        }

    }
    printf("%d",lcm);

}