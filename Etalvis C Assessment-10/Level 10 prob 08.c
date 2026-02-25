#include <stdio.h>

int main()
{
    char str[51];
    printf("Enter number :");
    scanf("%s",str);
    int i=0,valid=1;
    while(str[i]!='\0')
    {
        if(str[i]<'0'|| str[i]>'9')
        {
            valid=0;
            break;
        }
        i++;
    }
    if(valid==1 && i<51)
    {
    printf("Valid");
    }

    else
    printf("Invalid");
}