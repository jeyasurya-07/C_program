#include <stdio.h>
#include <stdlib.h>

struct student{
    int id;
    int maths;
    int science;
    struct student*next;
};
int main()
{
    struct student*head=NULL;
    struct student*temp=NULL;
    int i=0;
    while(i<5)
    {
        struct student*new;
        new=malloc(sizeof(struct student));
        printf("Enter value:");
        scanf("%d",&new->id);
        scanf("%d %d",&new->maths,&new->science);
        new->next=NULL;
        
        if(head==NULL)
        head=new;
        
        else
        temp->next=new;
        
        temp=new;
        i++;
    }
    
    struct student*ptr=head;
    while(ptr!=NULL){
        printf("%d\n%d\n%d\n--------------\n",ptr->id,ptr->maths,ptr->science);
        ptr=ptr->next;
    }
   
}