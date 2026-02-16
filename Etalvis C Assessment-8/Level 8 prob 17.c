#include <stdio.h>

int disp_count_sum14(int);
int main()
{
    int x=10,y;

    y=disp_count_sum14(x);
    printf("%d",y);
}

int disp_count_sum14(int x)
{
    int i,j,k=0,count=0;
    for(i=x;i<100000;i++)
    {
        k=0;
        for(j=i;j!=0;j=j/10)
        {
            k=(j%10)+k;
        }
        if(k==14)
        {
            count++;
        }
        

    }
    return count;
}