#include <stdio.h>

void strcon(char *, char *, char *);
int main()
{
    char src1[20],src2[20],dst[20];
    printf("Enter the string 1 :");
    scanf("%s",src1);
    printf("Enter the string 2 :");
    scanf("%s",src2);
    strcon(src1,src2,dst);
    printf("%s",dst);
}

void strcon(char * src1,char * src2,char * dst)
{
    int i,j=0;
    for(i=0;src1[i]!='\0' || src2[j]!='\0';i++)
    {
        if(src1[i]!='\0')
        {
            dst[i]=src1[i];
        }
        else if(src2[j]!='\0')
        {
            dst[i]=src2[j];
            j++;
        }
        
       
        

    }
     dst[i]='\0';
   
        
    
}