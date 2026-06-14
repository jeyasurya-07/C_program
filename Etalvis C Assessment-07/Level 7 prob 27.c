//count num <100000 whose sum of dig is 14
#include <stdio.h>

void disp_count_sum14(int);
int main()
{
 int x=10;
 disp_count_sum14(x);
}

void disp_count_sum14(int x)
{
    int i,count=0,j;
   
    for(x;x<100000;x++)
    {
       i=0;
        

        for(j=x;j!=0;j=j/10)
        {
           
           i=(j%10)+i;
        
        }
    
        if(i==14)
        {
            count++;
        }
    }
    

    printf("%d",count);

}