#include <stdio.h>

int count_total_digits(int);
int main ()
{
    int x,y;
    printf("Enter the number :");
    scanf("%d",&x);
    y=count_total_digits(x);
    printf("%d",y);
    
}

int count_total_digits(int x)
{
    int count=0,i;
       for(x;x!=0;x=x/10)
       {
        count++;
        
    }

       return count;
    
}