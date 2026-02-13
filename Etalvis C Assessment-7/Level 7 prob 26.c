//print biggest 4 digit num div by 7 and 9
#include <stdio.h>

void disp_biggest_4digit_div7_9(int);
int main()
{
 int x=1000;
 disp_biggest_4digit_div7_9(x);
}

void disp_biggest_4digit_div7_9(int x)
{
    int i;
   
    for(x;x<10000;x++)
    {
        if(x%7==0)
        {
            if(x%9==0)
            {
                i=x;
            }
        }

    
    
    }
    printf("%d",i);

}