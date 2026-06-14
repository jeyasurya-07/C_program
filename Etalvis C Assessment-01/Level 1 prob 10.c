#include  <stdio.h>

int main()
{
    int x=0,y=0;
    printf("Enter the number:");
    scanf("%d",&x);
    y=((x/10)%10);
    
    printf("Result=%d",y);
}
//get second digit of ip of 3 digit number