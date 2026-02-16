#include <stdio.h>

int disp_interchange_first_last_digit(int);
int main ()
{
    int x,y;
    printf("Enter the number :");
    scanf("%d",&x);
    y=disp_interchange_first_last_digit(x);
    printf("%d",y);
    
}

int disp_interchange_first_last_digit(int x)
{

    int i,j,y=1,k;
    i=x%10;
    x=x/10;
    for(j=x;j!=0;j=j/10)
    {
        y=y*10;
    }
    i=i*y;
    y=y/10;
    j=x/y;
    y=(x%y)*10;
    k=i+j+y;

      return k;
    
}