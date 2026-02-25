#include <stdio.h>

int main ()
{
    char str[51];
    int i,j, arr[50];
    printf("Enter the string :");
    scanf("%s",str);

    
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
        arr[i]=str[i];
        }
        else 
        break;
    }
    for(j=0;j<i;j++)
    {
        
        printf("%d",arr[j]-'0');
    }
    
}