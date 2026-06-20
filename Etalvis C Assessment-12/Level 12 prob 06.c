//calculator for big integers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getnum(char *);
int * addfun(char *,char*,int *);
int * subfun(char *,char*,int *);
int * mulfun(char *,char*,int *);
int * divfun(char *,char*,int *);
int compare(char *,char *);

char validateip(char *,char *);


int main()
{
    
    char * arr1,*arr2,ch;
    int *res,i,start=0;
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
        res=addfun(arr1,arr2,res);
        break;

        case '-':
        res=subfun(arr1,arr2,res);
        break;

        case '*':
        res=mulfun(arr1,arr2,res);
        break;

        case '/':
        res=divfun(arr1,arr2,res);
        break;

        default:
        printf("input is in wrong format! try again...");
    }
    start=0;
    for(i=100;i>=0;i--)
    {
        if(start==0 && res[i]==0)
        {
            start=0;
        }
        else{
            if(res[i]==-1)
            break;
            start=1;
            printf("%d",res[i]);
        }
    }
    if(start==0)
    printf("0");

    for(i=0;i<=100;i++)
    res[i]=0;
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

int * addfun(char * arr1,char * arr2,int * res)
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
    return res;

}

int * subfun(char*arr1,char*arr2,int *res)
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
    return res;
}

int * mulfun(char * arr1,char * arr2,int * res)
{
    int len1,len2,i,j,d1,d2,carry=0,a,b,count=0,start=0;
    len1=strlen(arr1);
    len2=strlen(arr2);
    a=0;
    for(j=len2-1;j>=0;j--)
    {
        d1=(arr2[j]-'0');
        b=0;
        for(i=len1-1;i>=0;i--)
        {
            d2=(arr1[i]-'0');
            res[a+b]+=(d1*d2);
            count=a+b;
            b++;
        }
        a++;
    }

    for(i=0;i<count;i++)
    {
        carry=res[i]/10;
        res[i]=res[i]%10;
        res[i+1]+=carry;

    }
return res;
    
} 


int compare(char *arr1, char *arr2)
{
    int len1,len2,i;
    len1=strlen(arr1);
    len2=strlen(arr2);
    if(len1>len2)
    return 1;
    if(len2>len1)
    return -1;
    else{
        for(i=0;i<len1;i++)
        {
            if(arr1[i]-'0'>arr2[i]-'0')
            return 1;
             if(arr1[i]-'0'<arr2[i]-'0')
            return -1;
        }
        
        return 0;
    }
}



int * divfun(char*arr1, char*arr2, int*res)
{
   int result[100];
    
    char temp[100];
    for(int z=0;z<sizeof(temp);z++)
    temp[z]='\0';
    int count=0,m=100,a=0,t1=0,flag=0;
    while(a<strlen(arr1))
    {
       t1=strlen(temp);
        temp[t1] = arr1[a];
        temp[t1+1] = '\0';
       int p=0, q=0;
    while(temp[p]=='0' && temp[p+1]!='\0')
    {
        p++;
    }
    while(temp[p]!='\0')
    {
        temp[q]=temp[p];
        p++;
        q++;
    }
    temp[q] = '\0';
        
    if(compare(temp, arr2) < 0)
    {
        a++;
        if(flag)
        res[m--]=0;
        continue;
    }
           
            while(compare(temp, arr2) >= 0)
            {
                
                
                 for(int z = 0; z < 100; z++)
                    result[z] = 0;

                subfun(temp,arr2,result);
                

                 for(int z=0;z<sizeof(temp);z++)
                 temp[z]='\0';

                
                int start = 0;
                int j = 0;
                for(int k = 99; k >= 0; k--)
                {
                    if(start == 0 && result[k] == 0)
                    {
                        continue;  
                    }
                    else
                    {
                        start = 1;
                        temp[j] = result[k] + '0';  
                        j++;
                    }
                }
                if(j==0)
                {
                    temp[j++]='0';
                    temp[j]='\0';
                }
                else
                temp[j] = '\0';
                count++;
                
                
            }
            
            res[m--]=count;
            flag=1;
            count=0;
            a++;
    }
    res[m]=-1;
    if(strlen(temp)!=0)
    printf("remainder : %s\n",temp);
    else
    printf("remainder : 0\n");
    return res;
}