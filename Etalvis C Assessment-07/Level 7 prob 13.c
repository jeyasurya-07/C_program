//reverse a number
#include <stdio.h>

void disp_reverse_number(int);
int main()
{
 int x;
 printf("Enter number:");
 scanf("%d",&x);
 disp_reverse_number(x);
}

void disp_reverse_number(int x)
{
    int j=0,i;
    for(x;x!=0;x=x/10)
    {
        i=x%10;
        j=(j*10)+i;
        
    }
    printf("%d",j);
}