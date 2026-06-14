//print total no of digit
#include <stdio.h>

int main ()
{
    int x,dig=0,i;
    printf("Enter number : ");
    scanf("%d",&x);

    for(i=x;i>0;i=i/10)
    {
        dig++;
    }
    printf("%d\n",dig);
    
}