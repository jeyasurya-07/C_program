//count num of odd digits
#include <stdio.h>

void disp_single_digit_square(int);
int main()
{
 int x;
 printf("Enter number :");
 scanf("%d",&x);
 disp_single_digit_square(x);
}

void disp_single_digit_square(int x)
{
    int i,count=0,j;
   
    for(x;x!=0;x=x/10)
    {

    i=x%10;
    
    
        for(j=1;j<4;j++)
        {
            if(j*j==i)
            {
                count++;
            }
        }
    
}
    printf("%d",count);

}