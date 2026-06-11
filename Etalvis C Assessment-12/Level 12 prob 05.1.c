#include <stdio.h>

void getnumbers(int *,int *);
void multiplynumbers(int *,int *,int *);
void print(int *);

int main ()
{
    int number1[50],number2[50],result[51];
     getnumbers(number1,number2);
    multiplynumbers(number1,number2,result);
   print(result);
}
void getnumbers( int * number1,int * number2)
{
    int i,size1,size2;
    printf("enter the size : ");
    scanf("%d",&size1);
    printf("Enter the values for 1st array :");

    for(i=size1-1;i>=0;i--)
    {
        scanf("%d",&number1[i]);
    }
    number1[size1]=-1;

    printf("enter the size : ");
    scanf("%d",&size2);
    printf("Enter the values for 2nd array :");
    for(i=size2-1;i>=0;i--)
    {
        scanf("%d",&number2[i]);
    }
    number2[size2]=-1;
}


void multiplynumbers(int *number1, int * number2,int * result)
{
 
     int i,y,j,z,carry,zcarry=0,k;
     for(int k = 0; k < 51; k++)
     {
      result[k] = 0;
     }
     for(j=0;number2[j]!=-1;j++)
     {
      i=0,carry=0;
      for(i=0;number1[i]!=-1;i++)
      {
        y=number1[i]*number2[j]+carry;
        z=y%10;
        carry=y/10;
        result[i+j]+=z;
        if(result[i+j]>9)
        {
         result[i+j+1] += result[i+j] / 10;
         result[i+j] %= 10;

        }
      }
     }
     result[i+j+1]=-1;
 
  


}

void print(int * result)
{
  int end = 0;
while(result[end] != -1) end++;

for(int i = end-1; i >= 0; i--)
    printf("%d", result[i]);
}