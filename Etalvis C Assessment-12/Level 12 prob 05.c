// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getfun(char*,char*);
int mulfun(char*,char*,int *);
int main() {
    char * arr1,*arr2;
    int *res, n,m,i,start=0,s;
    arr1=malloc(51*sizeof(char));
    arr2=malloc(51*sizeof(char));
    res=calloc(101,(sizeof(int)));
     getfun(arr1,arr2);
     s=mulfun(arr1,arr2,res);
    for(i=s;i>=0;i--)
    {
      if(res[i]==0 && start ==0)
      {
          start=0;
      }
      else {
          
      start=1;
      printf("%d",res[i]);
      }
    }
}

void getfun(char * arr1,char *arr2)
{
    int i;
    printf("Enter the arr1 values:");
    scanf("%50s",arr1);
    printf("Enter the arr2 values:");
    scanf("%50s",arr2);
    
}

int mulfun(char * arr1,char * arr2,int * res)
{
    int i,j,carry=0,a=0,b=0,len1,len2,s;
    len1=strlen(arr1);
    len2=strlen(arr2);
    
    for(j=len2-1;j>=0;j--)
    {b=0;
        for(i=len1-1;i>=0;i--)
        {
            res[a+b]+=((arr2[j]-'0')*(arr1[i]-'0'));
            b++;
        }
        a++;
    }
   // res[a+b-1]='\0';
    s=(len1+len2-1);
    printf("%d\n",s);
    
   
    for(i=0;i<s-1;i++)
    {
      
        carry=(res[i]/10);
        res[i]=(res[i]%10);
        res[i+1]+=(carry);
    
    }
    return s;
    
}