//check prime or not prime
#include <stdio.h>

int main ()
{
    int x,i,j=0;
    printf("Enter number : ");
    scanf("%d",&x);
if(x<=1)
{
   printf("Not prime");
}

else
{
    for(i=2;i<=x/2;i++)
    {
      if((x%i)==0)
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
