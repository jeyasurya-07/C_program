#include <stdio.h>

int main ()
{
    int a[50],b[50],res[51],i,j,k,l,carry=0;

     printf("Enter value for 1st :");
    for(i=0;i<50;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            break;
        }
    }
    printf("Enter value for 2nd :");
    for(j=0;j<50;j++)
    {
        scanf("%d",&b[j]);
        if(b[j]==0)
        {
            break;
        }
    }

    if(i>j)
    {
        k=i-1,l=i;
        
    }
    else
    {
        k=j-1;l=j;
    }
    i=i-1;
    j=j-1;
carry=0;
    for(k;k>=0;k--)
    {
        if(i>=0&&j>=0)
            {
                if(i==0&&j==0)
                 {
                    res[k]=(a[i]+b[j]+carry);
                    printf("2) res :%d\n",res[k]);
                    i--;
                    j--;
                 }
                else
                {
                res[k]=(a[i]+b[j]+carry)%10;
                carry=(a[i]+b[j]+carry)/10;
                i--;
                j--;
                printf("1) res :%d  carry :%d\n",res[k],carry);
                }
            
            
            }
      
        else if(j>=0)
        {
            if(j>0)
            {
            res[k]=(b[j]+carry)%10;
            carry=(b[j]+carry)/10;
            j--;
             printf("3) res :%d  carry :%d\n",res[k],carry);
            }
            else if(j==0)
            {
            res[k]=b[j]+carry;
            j--;
             printf("4) res :%d \n",res[k]);
            }
        }
        else if(i>=0)
        {
            if(i>0)
            {
            res[k]=(a[i]+carry)%10;
            carry=(a[i]+carry)/10;
             printf("5) res :%d  carry :%d\n",res[k],carry);
            i--;
            }
            else if(i==0)
            {
            res[k]=a[i]+carry;
            i--;
             printf("6) res :%d\n",res[k]);
            }
        }
    


    }
    for(i=0;i<l;i++)
    {
        printf("%d",res[i]);
    }


}