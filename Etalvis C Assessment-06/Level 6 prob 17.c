//check prime or not prime and sum is 14 or not
#include <stdio.h>

int main ()
{
    int x,i,j=0,y;
    printf("Enter number : ");
    scanf("%d",&x);
if(x<=1)
{
   printf("Not prime & sum of digit is not 14");
}

else
{
    y=x%10;
    y=y+(x/10);
    i=2;
    while(i<=x/2)
    {
        if(x%i==0)
        {
            j=1;
        }
        i++;
    }

    if(j==1)
    {
        if(y==14)
        {
        printf("NOT Prime but sum is 14");
        }
        else
        printf("Not prime and sum of digit is not 14");
    }
    else 
        if(y==14)
        {
        printf("prime and sum of digit is 14");
        }
        else
        printf("prime but sum of digit is not 14");
}

}
