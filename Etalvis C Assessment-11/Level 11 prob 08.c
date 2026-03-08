#include <stdio.h>

int strcomp(char *,char *);
int main()
{
    char src[10],dst[10];
    printf("Enter the 1st word :");
    scanf("%9s",src);
    printf("Enter the 2nd word :");
    scanf("%9s",dst);
    if(strcomp(src,dst))
    {
        printf("Success");
    }
    else
    printf("Failure");
}

int strcomp(char * src,char * dst)
{
    int i=0;
    for(i=0;src[i]!='\0' || dst[i]!='\0';i++)
    {
        if(src[i]!=dst[i])
        {
            return 0;
        }
    }
    return 1;
}