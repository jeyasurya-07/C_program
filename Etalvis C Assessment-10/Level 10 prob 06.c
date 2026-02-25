#include <stdio.h>

int main()
{
    char c;
    int a,y=1,b;
    printf("Enter number :");
    scanf("%d",&a);
    for(int x=a;x>=10;x/=10)
    {
        y=y*10;
    }
    for(b=a;a!=0;a/=10)
    {
        c=(b/y)+'0';
        b=b%y;
        y/=10;
        printf("%c\n",c);
    }
}