#include <stdio.h>

int find_2digit_odd_sum7(int *);
int main()
{
    int arr[25],count=0,i;
    count=find_2digit_odd_sum7(arr);
    for(i=0;i<count;i++)
    {
        printf("%d\n",arr[i]);
    }
}

int find_2digit_odd_sum7(int * ptr)
{
    int i=10,a,x=0;
    for(a=0;a<25;a++)
    {
    while(i<100)
    {
        if(i%2==1)
        {
            if((i/10)+(i%10)==7)
            {
               ptr[a]=i;
               i++;
               x++;
               break;
            }
            else{
                i++;
            }
        }
        else{
            i++;
        }
    }
}
return x;
}