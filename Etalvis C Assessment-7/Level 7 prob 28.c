//find lcm of two no's
#include <stdio.h>

void disp_LCM2(int,int);
int main()
{
 int x,y;
 printf("Enter value for x and y :");
 scanf("%d %d",&x,&y);
 disp_LCM2(x,y);
}

void disp_LCM2(int x,int y)
{
    int k=1,j=1,lcm;
    for(x;j%y!=0;k++)
    {
        j=x*k;
        if(j%y==0)
        {
            lcm=j;
        }

    }
    
    
    
    

    printf("%d",lcm);

}