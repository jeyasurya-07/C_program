#include <stdio.h>

int main ()
{
    char a[20];
    int i=0;
    printf("Enter the num:");
    scanf("%s",&a);

   while(a[i]!='\0')
   {
    printf("%d",a[i]-'0');
    i++;
   }
}