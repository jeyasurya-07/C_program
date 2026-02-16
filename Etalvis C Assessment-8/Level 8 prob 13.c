#include <stdio.h>

int disp_single_digit_square(int);
int main()
{
    int x,y;
    printf("Enter number :");
    scanf("%d",&x);
    y=disp_single_digit_square(x);
    printf("%d",y);
}

int disp_single_digit_square(int x)
{
    int i,j,k,count=0;
    for(i=x;i!=0;i=i/10)
    {
        j=i%10;
       for(k=1;k<4;k++)
       {
        if(k*k==j)
        {
            count++;
        }
       }
    }
    return count;
}