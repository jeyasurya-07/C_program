#include <stdio.h>

void getnumbers(int *,int *);
void addnumbers(int *,int *,int *);
void print(int *);

int main ()
{
    int number1[50],number2[50],result[51];
     getnumbers(number1,number2);
    addnumbers(number1,number2,result);
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

void addnumbers(int *number1, int * number2,int * result)
{
  int x,y,i,j,size1=0,size2=0,k,carry=0;
  for(i=0;number1[i]!=-1 && i<50;i++)
  {
    size1++;
  }
  printf("\nsize1 : %d",size1);
  for(i=0;number2[i]!=-1 && i<50;i++)
  {
    size2++;
  }
  printf("\nsize2 : %d\n",size2);
  x=size1;
  if(size2>size1)
  {
    x=size2;
  }
  i=0,j=0;
  for(k=x-1;k>=0;k--)
  {
    if(*number2==-1 && *number1!=-1){
        y=(*number1)+carry;
        if(*(number1+1)==-1)
        {
          result[k]=y;
          number1++;
        }
        else
        {
        result[k]=y%10;
        carry=y/10;
        number1++;
        }
        
      }

      else if(*number1==-1 && *number2!=-1){
        y=(*number2)+carry;
         if(*(number2+1)==-1)
        {
          result[k]=y;
          number2++;
        }
        else{
        result[k]=y%10;
        carry=y/10;
        number2++;
        }
        
      }

    else if(*number1!=-1 && *number2!=-1)
          {
        y=(*number1)+(*number2)+carry;
        result[k]=(y%10);
        carry=y/10;
        number2++;
        number1++;
        
      
      
    }
  }
  result[x]=-1;
 
  


}

void print(int * result)
{
  int i=0;
  for(i=0;result[i]!=-1 && i<50;i++)
  {
  printf("%d",result[i]);
  }
}