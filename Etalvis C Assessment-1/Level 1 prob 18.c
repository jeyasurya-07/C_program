#include  <stdio.h>

int main()
{
    int x=0,y=0,z=0;
    printf("Enter the number:");
    scanf("%d",&x);
    z=x%2;
    y=x-(z*5);
    
    printf("Result=%d",y);
}
//if num is odd subtract 5 from ip else print ip as it is