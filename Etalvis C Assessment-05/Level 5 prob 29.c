//lcm for 3 numbers
#include <stdio.h>

int main()
{
    int a,b,c,x=12,y=18,z=30,i,j=1,lcm=0,win;
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
        
        
        
    printf("Enter value for A, B and c:");
    scanf("%d %d %d",&a,&b,&c);
    win=1;
    for(i=1;win!=0;i++)
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
    }
    printf("%d",lcm);

}