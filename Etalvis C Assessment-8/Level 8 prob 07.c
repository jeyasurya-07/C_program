#include <stdio.h>

int disp_reverse_number(int);
int main ()
{
    int x,y;
    printf("Enter the number :");
    scanf("%d",&x);
    y=disp_reverse_number(x);
    printf("%d",y);
    
}

int disp_reverse_number(int x)
{
    int rev=0,i;
       for(x;x!=0;x=x/10)
       {
        i=x%10;
        rev=rev*10+i;
        
    }

       return rev;
    
}