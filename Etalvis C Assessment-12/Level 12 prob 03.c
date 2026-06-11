#include <stdio.h>


void fun(char *str,char *match);
int main()
{
    char str[20], match[10];
    int i=1;

    printf("Enter the string :");
    scanf("%s",str);
    printf("Enter the char :");
    scanf(" %s",match);

    fun(str,match);   
    
}

void fun(char *str,char *match)
{
    int place=1,i,k;
    while((*str)!='\0')
    {
        k=1;
            if((*match)==*str)
            {
                for( i=1;match[i]!='\0';i++)
                {
                    if(*(match+i)!=*(str+i))
                    {
                        k=0;
                        break;
                    }
                }
                if(k==1)
                {
                    printf("%d",place);
                }
            }
        str++;
        place++;
        
    }
}