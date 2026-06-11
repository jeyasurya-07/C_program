#include <stdio.h>


void fun(char *str,char match);
int main()
{
    char str[20], match;

    printf("Enter the string :");
    scanf("%s",str);
    printf("Enter the char :");
    scanf(" %c",&match);

    fun(str,match);   
    
}

void fun(char *str,char match)
{
    int place=1;
    while((*str)!='\0')
    {
        if(match==(*str))
        {
            printf("%d ",place);
        }
            str++;
            place++;
        
        
    }
}