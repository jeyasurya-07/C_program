#include <stdio.h>

int main ()
{
    char str[51];
    int len=0;
    printf("Enter the string :");
    scanf("%s",str);
    
    while(str[len]!='\0')
  {
    len++;
  }
  len=len-1;
  while(len>=0)
  {
    printf("%c",str[len]);
    len--;
  }
}