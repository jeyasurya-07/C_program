//print the count of digit in a num
#include <stdio.h>

int main()
{
    int x,count=0;
    printf("Enter number :");
    scanf("%d",&x);

    loop: if(x!=0)
    {
    count++;
    x=x/10;
   
        goto loop;
        
    }
     printf("%d",count);
}