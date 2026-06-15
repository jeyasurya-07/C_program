#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getnum(char *);
void addfun(char *,char*,int *);
void subfun(char *,char*,int *);
//void mulfun(char *,char*,int *);
//void divfun(char *,char*,int *);

char validateip(char *,char *);


int main()
{
    
    char * arr1,*arr2,ch;
    int *res;
    arr1=malloc(101*sizeof(char));
    arr2=malloc(50*sizeof(char));
    res=calloc(101,sizeof(int));
    while(1)
    {
    printf("\ncalc>>");
    getnum(arr1);
    ch=validateip(arr1,arr2);
    if (ch=='q')
    {
        break;
    }
    else if(ch=='0')
    {
        printf("Enter valid number!!!");
        continue;
    }
    else if(ch =='#')
    {
        printf("no operator is found");
        continue;
    }
    else if(ch=='@')
    {
        printf("Enter valid operation!!!");
        continue;
    }
else{
    switch (ch)
    {
        case '+':
        addfun(arr1,arr2,res);
        break;

        case '-':
        subfun(arr1,arr2,res);
        break;

        case '*':
       // mulfun(arr1,arr2,res);
        break;

        case '/':
        //divfun(arr1,arr2,res);
        break;

        default:
        printf("input is in wrong format! try again...");
    }
}
    
}
free(arr1);
free(arr2);
free(res);
}
void getnum(char * arr1)
{
    scanf("%s",arr1);

}

char validateip(char * arr1,char * arr2)
{
    int i=0,j=0,len1=0,len2=0,flag=0;
    char ch='#';
    char ex[5]={'Q','u','i','t','\0'};
    for(i=0;arr1[i]!='\0';i++)
    {
        if(arr1[i]!=ex[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        return 'q';
    }
    for(i=0;arr1[i]!='\0';i++)
    {
      if(arr1[i]=='+'||arr1[i]=='-'||arr1[i]=='*'||arr1[i]=='/')
      {
        ch=arr1[i];
        arr1[i++]='\0';
        break;
      }
    }

    for(;arr1[i]!='\0';i++)
    {
        arr2[j++]=arr1[i];
        arr1[i]=0;
    }
    arr2[j]='\0';
    len1=strlen(arr1);
    len2=strlen(arr2);
    for(i=0;i<len1;i++)
    {
        if(arr1[i]<'0'||arr1[i]>'9')
        {
            
            return '0';
        }
    }
    if(ch!='+'&& ch!='-'&& ch!='*'&& ch!='/')
    {
        
        return '@';
    }
    for(i=0;i<len2;i++)
    {
        if(arr2[i]<'0'||arr2[i]>'9')
        {
    
            return '0';
        }
    }
    return ch;
}

void addfun(char * arr1,char * arr2,int * res)
{

    int len1,len2,carry=0,i,j,k,max,sum=0,start=0;
    len1=strlen(arr1);
    len2=strlen(arr2);
    max=len1;
    if(len2>len1)
    max=len2;
    carry=0;
    i=len1-1;
    j=len2-1;
    for(k=0;k<=max;k++)
    {
        if(i>=0)
        {
            if(j>=0)
            {
                sum=(arr1[i]-'0')+(arr2[j]-'0')+carry;
                carry=(sum/10);
                res[k]=(sum%10);
                i--;
                j--;
            }
            else
            {
                sum=(arr1[i]-'0')+carry;
                carry=sum/10;
                res[k]=sum%10;
                i--;
            }
        }
        else if(j>=0)
        {
            sum=(arr2[j]-'0')+carry;
            carry=sum/10;
            res[k]=sum%10;
            j--;
        }
        else
        res[k]=carry;
    }
    for(k=max;k>=0;k--)
    {
        if(res[k]==0 && start==0)
        {
            start=0;

        }
        else{
            start=1;
            printf("%d",res[k]);
        }
    }
    if(start==0)
    printf("0");
for(i=0;i<=max;i++)
res[i]=0;

}

void subfun(char*arr1,char*arr2,int *res)
{
    int i,j,k,d1,d2,borrow=0,len1,len2,start=0;
    len1=strlen(arr1);
    len2=strlen(arr2);
    i=len1-1;
    j=len2-1;
    for(k=0;k<len1;k++)
    {
        if(i>=0)
        {
            if(j>=0)
            {
                d1=arr1[i]-'0';
                d2=arr2[j]-'0';
                d1=d1-borrow;
                if(d1<d2)
                {
                    d1+=10;
                    borrow=1;
                }
                else
                borrow=0;

                res[k]=d1-d2;
                i--;
                j--;
            }
            else
            {
            d1=arr1[i]-'0';
            d1=d1-borrow;
            if(d1<0){
            d1+=10;
            borrow=1;
            }
            else
            borrow=0;
            res[k]=d1;
            i--;
            }
        }
    }
    for(i=len1;i>=0;i--){
        if(res[i]==0 && start==0)
        {
            start=0;
        }
        else{
            start=1;
            printf("%d",res[i]);
        }
    }
    if(start==0)
    printf("0");

    for(i=0;i<=len1;i++)
res[i]=0;
}