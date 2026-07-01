#include <stdio.h>
#include <stdlib.h>


void insertfun();
void displayfun();
void deletefun();

struct student{
    struct student * prev;
    int id;
    int maths;
    int science;
    struct student*next;
};
struct student *head=NULL;
struct student * temp=NULL;
int main()
{
int i=0;

while(i<5)
{
    printf("Enter the values:");
    struct student * ptr = malloc(sizeof(struct student));
    scanf("%d %d %d",&ptr->id,&ptr->maths,&ptr->science);
    ptr->next=NULL;
    if(head==NULL)
    {
        head=ptr;
        ptr->prev=NULL;
    }
    else{
        ptr->prev=temp;
        temp->next=ptr;
    }
    temp=ptr;
    i++;
    
}

while(1)
{
    int get=0;
        printf("\nMenu Items:\n");
        printf("1.Insert Entry\n2.Delete Entry\n3.Display List\n4.Exit\n");
        scanf("%d",&get);
        switch (get)
        {
            case 1:
            {
                insertfun();
                break;
            }
            case 2:
            {
                deletefun();
                break;
            }
            case 3:
            {
                displayfun();
                break;
            }
            case 4:
            {
                return 0;
            }

  }
}
}
void insertfun()
{
     int get;
    printf("Enter 1=after, 0=before\n");
    scanf("%d",&get);
     int id;
        printf("Enter desired id:");
        scanf("%d",&id);
        struct student*new=malloc(sizeof(struct student));
        struct student * trav=head;
        struct student * current=NULL;
        printf("Enter values to insert:");
        scanf("%d %d %d",&new->id,&new->maths,&new->science);
        new->next=NULL;
        new->prev=NULL;
        if(get)
        {
            while(trav!=NULL)
            {
              if(trav->id==id){
                break;
              }
                trav=trav->next;
            }
            
            new->next=trav->next;
            if(trav->next!=NULL)
            {
            trav->next->prev=new;
            }
            trav->next=new;
            new->prev=trav;

            if(new->next == NULL)
{
    temp = new;
}
        }
        else
        {
            while(trav!=NULL)
            {
               if(trav->id==id){
                break;
               }
                current=trav;
                trav=trav->next;
            }
            if(trav==head)
            {
                new->next=head;
                new->prev=NULL;
                head->prev=new;
                head=new;
            }
            else{
                new->prev=trav->prev;
                trav->prev->next=new;
                trav->prev=new;
                new->next=trav;
                
            }
        }
}

void deletefun()
{
    int id;
    printf("\nEnter the id to delete:\n");
    scanf("%d",&id);
    struct student * temp1=head;
    while(temp1!=NULL)
    {

        if(temp1->id==id){
            
        break;
        }
        
        temp1=temp1->next;

    }
    if(temp1->prev==NULL)
    {
        
        head=temp1->next;
        if(head != NULL)
    head->prev = NULL;
        
    }
    else if(temp1->next==NULL)
    {
        temp1->prev->next=NULL;
        temp=temp1->prev;
    }
    else{

    temp1->prev->next=temp1->next;
    temp1->next->prev=temp1->prev;
    }
}


void displayfun(){

 struct student*ptr=head;
    while(ptr!=NULL){
        printf("%d\n%d\n%d\n--------------\n",ptr->id,ptr->maths,ptr->science);
        ptr=ptr->next;
    }
}
