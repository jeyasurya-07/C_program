#include <stdio.h>

int main ()
{
    char str[51];
    int i,l;
    printf("Enter the number :");
    scanf("%s",str);
    i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='0')
        {
            l++;
        }
        else if (str[i]!=0)
        {
            break;
        }
        i++;

    }
    while(str[l]!='\0')
    {
    printf("%c",str[l]);
    l++;
    }
}