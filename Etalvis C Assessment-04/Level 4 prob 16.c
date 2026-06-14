//check a num its prime or not
#include <stdio.h>

int main()
{
    int x,y,z,i=0;
    printf("Enter number :");
    scanf("%d",&x);
    y=x/2;
    z=2;
    if(x<=1)
    {
        printf("its a composite");
    }
    else
    {

    
    check:if(z<=y)
          
          {
           
            if(x%z==0)
            printf("Not prime");
            else
            {
                z++;
                goto check;
            }
           
          }
           
           
           else
           printf("Prime");
        }
}