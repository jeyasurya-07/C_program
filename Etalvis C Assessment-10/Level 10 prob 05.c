#include <stdio.h>

int main ()
{
    char a[10];
    int x,count=0,i,j;
    printf("Enter the number :");
    scanf("%d",&x);
    for(i=x;i!=0;i=i/10)
    {
        count++;
    }
    for(j=count-1;x!=0;j--)
    {
        a[j]=(x%10)+'0';
        x=x/10;
        
    }
    a[count+1]='\0';

    printf("%s",a);

}