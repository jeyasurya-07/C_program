//count num of odd 2 digits
#include <stdio.h>

void disp_2digit_square(int);
int main()
{
 int x;
 printf("Enter number :");
 scanf("%d",&x);
 disp_2digit_square(x);
}

void disp_2digit_square(int x)
{
    int i,count=0,j;
   
    for(x;x>=10;x=x/10)
    {

    i=x%100;
    
    
        for(j=4;j<10;j++)
        {
            if(j*j==i)
            {
                count++;
            }
        }
    
}
    printf("%d",count);

}