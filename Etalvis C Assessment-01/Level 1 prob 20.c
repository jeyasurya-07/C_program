//if sum of ip is odd subtract 5 from ip else print ip as it is
#include  <stdio.h>

int main()
{
    int x=0,y=0,z=0;
    printf("Enter the number:");
    scanf("%d",&x);
    z=x%10;
    y=(x/10)+z;
    z=(y%2);
    y=x-(z*5);    
    printf("Result=%d",y);
}