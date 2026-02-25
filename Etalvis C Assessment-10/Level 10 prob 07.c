#include <stdio.h>

int main ()
{
    char str[25];
    int len=0;
    printf("Enter the string :");
    scanf("%s",str);
    
    while(str[len]!='\0')
  {
    len++;
  }
printf("%d",len);
}