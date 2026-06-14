#include <stdio.h>

int main()
{
    int i,j=1000;

    for(i=j;i<10000;i++)
    {
        if(i%7==0)
        {
            if(i%9==0)
            {
                if(i>j)
                {
                    j=i;
                }
            }
        }
    }
    printf("%d",j);
}