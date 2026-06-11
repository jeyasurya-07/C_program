#include <stdio.h>
#include<string.h>

int main()
{
    int i,words=1;
    char str[30];
    printf("Enter the string :");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i] ==' ')
        {
            words++;
        }
    }
    printf("%d",words);
}