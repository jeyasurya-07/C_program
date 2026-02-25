#include <stdio.h>

int main()
{
    int arr[50],i,j;
    char str[51];
    printf("Enter the array values :");
    for(i=0;i<50;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<0)
        {
            break;
        }
        if(arr[i] > 9)
        {
            printf("Enter only single digits!\n");
            i--;
        }
    }
    for(j=0;j<i;j++)
    {
        str[j]=arr[j]+'0';
    }
    str[j]='\0';

    printf("%s",str);
}