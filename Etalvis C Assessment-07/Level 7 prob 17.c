//check prime and sum is 14 or not
#include <stdio.h>

void check_prime_and_sum14(int);
int main()
{
 int x;
 printf("Enter number:");
 scanf("%d",&x);
 check_prime_and_sum14(x);
}

void check_prime_and_sum14(int x)
{
   int i,j=1,y;
   for(i=2;i<=x/2;i++)
   {
    if(x%i==0)
    {
        j=0;
    }
   }
   y=(x%10)+(x/10);

   if(j==0)
   {
    if(y==14)
    {
        printf("Not prime but sum is 14");
    }
    else
    printf("Not prime and sum is not 14");
   }
   else{
    if(y==14)
    {
        printf("prime and sum is 14");
   }
    else
    printf("prime but sum is not 14");
   }
}