#include <stdio.h>

int disp_two_digit_square(int);
int main()
{
    int x,y;
    printf("Enter number :");
    scanf("%d",&x);
    y=disp_two_digit_square(x);
    printf("%d",y);
}

int disp_two_digit_square(int x)
{
    int i,j,k,count=0;
    for(i=x;i>=10;i=i/10)
    {
        j=i%100;
       for(k=1;k<10;k++)
       {
        if(k*k==j)
        {
            count++;
        }
       }
    }
    return count;
}