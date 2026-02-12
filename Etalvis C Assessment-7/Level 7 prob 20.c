//check prime or not
#include <stdio.h>

void disp_2digit_even_sum6(int);
int main()
{
 int x=2;
 disp_2digit_even_sum6(x);
}

void disp_2digit_even_sum6(int x)
{
    int i,count=0,j;
   
    for(x;x<10;x++)
    {

    j=1;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            j=0;
            break;
            
        }
    }
        if(j==1)
        {
        count++;
        }
        
    
}
    printf("%d",count);

}