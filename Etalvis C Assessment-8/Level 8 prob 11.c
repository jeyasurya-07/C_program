#include <stdio.h>

int disp_total_odd_digit(int);
int main()
{
    int x,y;
    printf("Enter number :");
    scanf("%d",&x);
    y=disp_total_odd_digit(x);
    printf("%d",y);
}

int disp_total_odd_digit(int x)
{
    int i,j,count=0;
    for(i=x;i!=0;i=i/10)
    {
        j=i%10;
        if(j%2==1)
        {
            count++;
        }
    }
    return count;
}