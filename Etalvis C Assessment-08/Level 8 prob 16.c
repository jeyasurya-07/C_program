#include <stdio.h>

int disp_biggest_4digit_div7_9(int);
int main()
{
    int x=9999,y;

    y=disp_biggest_4digit_div7_9(x);
    printf("%d",y);
}

int disp_biggest_4digit_div7_9(int x)
{
    int i,j,big;
    for(i=x;i>999;i--)
    {
        if(i%7==0)
        {
            if(i%9==0)
            {
                big=i;
                break;
            }
        }

    }
    return big;
}