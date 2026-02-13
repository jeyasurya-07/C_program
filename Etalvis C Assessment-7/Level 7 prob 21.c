//count num of odd digits
#include <stdio.h>

void disp_total_odd_digit(int);
int main()
{
 int x;
 printf("Enter number :");
 scanf("%d",&x);
 disp_total_odd_digit(x);
}

void disp_total_odd_digit(int x)
{
    int i,count=0,j;
   
    for(x;x!=0;x=x/10)
    {

    i=x%10;
    
    
        if(i%2==1)
        {
        count++;
        }
        
    
}
    printf("%d",count);

}