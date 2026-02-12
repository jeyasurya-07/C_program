//interchange 1st and last digit of num
#include <stdio.h>

void disp_interchange_first_last_digit(int);
int main()
{
 int x;
 printf("Enter number:");
 scanf("%d",&x);
 disp_interchange_first_last_digit(x);
}

void disp_interchange_first_last_digit(int x)
{
    int i,j,k=1;
    i=x%10;
    x=x/10;
    for(j=x;j>=10;j=j/10)
    {
        k=k*10;
        
    }
    i=i*k*10;
    j=(x%k)*10;
    x=x/k;
    j=i+j+x;
    printf("%d",j);
}