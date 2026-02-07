#include  <stdio.h>

int main()
{
    int x=0,y=0,z=0;
    printf("Enter the number:");
    scanf("%d",&x);
    x=(x%10);
    y=x+10;
    
    printf("Result=%d",y);
}
//make 10's digit as 1 in a 2 digit number ip