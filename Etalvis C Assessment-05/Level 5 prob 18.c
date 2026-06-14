//check prime or not prime based on 1's and 10's digit
#include <stdio.h>

int main ()
{
    int x,i,j=0,y;
    printf("Enter number : ");
    scanf("%d",&x);
if(x<=1)
{
   printf("Not prime");
}

else
{
    y=x%100;
    for(i=2;i<=y/2;i++)
    {
      if((y%i)==0)
      {
        j=1;
      }
     
    }

    if(j==1)
    {
        printf("NOT Prime");
    }
    else 
        printf("prime");
}

}
