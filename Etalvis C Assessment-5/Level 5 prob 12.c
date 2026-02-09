//print sum  of digit
#include <stdio.h>

int main ()
{
    int x,sum=0,i,y;
    printf("Enter number : ");
    scanf("%d",&x);

    for(i=x;i>0;i=i/10)
    {
        sum=(i%10)+sum;
    }
    printf("%d\n",sum);
    
}