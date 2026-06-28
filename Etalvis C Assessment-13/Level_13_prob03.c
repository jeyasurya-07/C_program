#include <stdio.h>
#include <stdlib.h>

void insertfun();
void displayfun();
void deletefun();
struct student{
    int id;
    int maths;
    int science;
    struct student * next;
};
struct student * head=NULL;
struct student * temp =NULL;

int main ()
{
    int i=0;
    while(i<5)
    {
        struct student*ptr=malloc(sizeof(struct student));
        printf("enter values:");
        scanf("%d %d %d",&ptr->id,&ptr->maths,&ptr->science);
        ptr->next=NULL;
        if(head==NULL)
        {
            head=ptr;
        }
        else
        temp->next=ptr;

        temp=ptr;
        i++;
    }
    while(1)
    {
        int get=0;
        printf("\nMenu Items:\n");
        printf("1.Insert Entry\n2.Delete Entry\n3.Display List\n4.Exit\n");
        scanf("%d",&get);
        switch (get){
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
        struct student * prev=NULL;
        printf("Enter values to insert:");
        scanf("%d %d %d",&new->id,&new->maths,&new->science);
        new->next=NULL;
    if(get)
    {
       
        while(trav!=NULL)
        {
            if(trav->id==id)
            {
                break;
            }
            trav=trav->next;
        }
        new->next=trav->next;
        trav->next=new;
    }

    else
    {
        prev=head;
        while(trav!=NULL)
        {

            if(trav->id==id)
            {
                break;
            }
            prev=trav;
            trav=trav->next;
        }
        if(prev==head)
        {
            head=new;
            new->next=prev;
        }
        else{
        new->next=prev->next;
        prev->next=new;
        }
    }
}

void deletefun(){
    int id;
    printf("\nEnter the id to delete:\n");
    scanf("%d",id);
    struct student * del=NULL;
    struct student * temp=head;
    struct student *prev=head;
    struct student *next=head;
    while(temp!=NULL)
    {

        if(temp->id==id){
            next=temp->next;
        break;
        }
        prev=temp;
        temp=temp->next;

    }
    if(prev==head)
    {
        head=next;
    }
    prev->next=temp->next;

}

void displayfun()
{
struct student*print=head;
    while(print!=NULL)
    {
        printf("\nid=%d\n%d\n%d\n-----------\n",print->id,print->maths,print->science);
        
        print=print->next;
    }
}