#include <stdio.h>
int main()
{
    int a,b,i,j,y,k,lcm;
    printf("Enter value of A and B :");
    scanf("%d %d",&a,&b);

    i=a;
    j=b;
    if(b>a)
    {
        i=b;
        j=a;
    }

    y=1;
    k=1;
    while(y%j!=0)
    {
        
        y=i*k;
        if(y%j==0)
        {
            lcm=y;// we can use flag var to stop
        }
        k++;
    }
    printf("%d",lcm);
}