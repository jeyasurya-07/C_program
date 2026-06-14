//lcm for 3 numbers
#include <stdio.h>

int main()
{
    int a,b,c,x,y,z,i,j,lcm=0,win;
    printf("Enter value for A,B,c :");
    scanf("%d %d %d",&x,&y,&z);
    a=x;
    b=y;
    c=z;
    if(y>x)
    {
      if(y>z)
      {
        a=y;
        b=x;
        c=z;
      }
    }
    if(z>x)
    {
      if(z>y)
      {
        a=z;
        b=x;
        c=y;
      }
    }
        
        
        
   
    win=1;
    i=1;
    while(win!=0)
    {
        j=a*i;
        if(j%b==0)
        {
            if(j%c==0)
            {
                lcm=j;
                win=0;
            }
        }
        i++;

    }
    printf("%d",lcm);

}