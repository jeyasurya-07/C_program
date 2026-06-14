#include <stdio.h>

int disp_sum_all_digits(int);
int main ()
{
    int x,y;
    printf("Enter the number :");
    scanf("%d",&x);
    y=disp_sum_all_digits(x);
    printf("%d",y);
    
}

int disp_sum_all_digits(int x)
{
    int sum=0,i;
       for(x;x!=0;x=x/10)
       {
        i=x%10;
        sum=sum+i;
        
    }

       return sum;
    
}