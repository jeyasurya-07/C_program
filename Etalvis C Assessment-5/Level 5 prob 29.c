//lcm for 3 numbers
#include <stdio.h>

int main()
{
    int a,b,c,x=12,y=18,z=30,i,j=1,lcm=0;
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
    for(i=1;j%b!=0||j%c!=0;i++)
    {
        j=a*i;
        if(j%b==0)
        {
            if(j%c==0)
            {
                lcm=j;
            }
        }
    }
    printf("%d",lcm);

}