#include <stdio.h>

int strcopy(char *, char*);
int main()
{
    char src[10],dest[10];
    printf("Enter the string :");
    scanf("%9s",src);
    strcopy(src,dest);
    printf("%s",dest);
}

int strcopy(char * src, char * dest)
{
    int i=0;
    while(src[i]!='\0')
{
    dest[i]=src[i];
    i++;
}
dest[i]='\0';
}