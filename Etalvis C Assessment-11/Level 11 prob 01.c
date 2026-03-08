#include <stdio.h>
int main()
{
    int * ptr,i;
    printf("Enter the number :");
    scanf("%d",&i);
    ptr=&i;
    *ptr+=1;
    printf("%d",*ptr);
}