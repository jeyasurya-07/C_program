//count num of single digit prime
#include <stdio.h>

void disp_single_digit_prime(int);
int main()
{
 int x;
 printf("Enter number :");
 scanf("%d",&x);
 disp_single_digit_prime(x);
}

void disp_single_digit_prime(int x)
{
    int i,count=0,j,k=0;
   
    for(x;x!=0;x=x/10)
    {

    i=x%10;
     if(i>1)
            {
    k=1;
        for(j=2;j<=i/2;j++)
        {
           
            if(i%j==0)
            {
                k=0;
            }
        
        }
    }
        if(k==1)
        {
            count++;
        }
    
}
    printf("%d",count);

}