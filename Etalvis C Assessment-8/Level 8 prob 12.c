#include <stdio.h>

int disp_total_2digit_odd(int);
int main()
{
    int x,y;
    printf("Enter number :");
    scanf("%d",&x);
    y=disp_total_2digit_odd(x);
    printf("%d",y);
}

int disp_total_2digit_odd(int x)
{
    int i,j,count=0;
    for(i=x;i>=10;i=i/10)
    {
        j=i%100;
        if(j%2==1)
        {
            count++;
        }
    }
    return count;
}