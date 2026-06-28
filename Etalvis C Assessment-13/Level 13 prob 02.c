#include <stdio.h>
#include <stdlib.h>

void insert_fun();
void display_fun();

struct student{
    int id;
    int maths;
    int science;
    struct student*next;
};

 struct student*head=NULL;
    struct student*temp=NULL;
int main()
{
    
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

    while(1)
    {
        printf("\n1.Insert Entry\n2.Display List\n3.Exit\n");
        int fun_num;
        printf("Enter the operation number:");
        scanf("%d",&fun_num);
        switch (fun_num)
        {
            case 1:
            {
                insert_fun();
                break;
            }
            case 2:
            {
                display_fun();
                break;
            }
            case 3:
            {
                return 0;
            }
            default:
            printf("Enter valid function number");
            break;
        }
    }
}

    void insert_fun()
    {
        int a,get;
    printf("enter the id place:");
    scanf("%d",&a);
    printf("After=1 , Before=0\n");
    scanf("%d",&get);
    if(get!=1 && get!=0){
    printf("enter valid operation");
    return;
    }
    
    if(get)
    {
        struct student*hi=head;
        struct student * trav=malloc(sizeof(struct student));
        printf("Enter the values to be inserted : ");
        scanf("%d %d %d",&trav->id,&trav->maths,&trav->science);
        trav->next=NULL;
        int found=0;
        while(hi!=NULL)
        {
           
            if(hi->id==a)
            {
               trav->next=hi->next;
               hi->next=trav;
               found=1;
               break;
                
            }
            hi=hi->next;
        }
        if(found==0)
        printf("nothing added, id not found");
    }
    else
    {
        struct student*hi=head;
        struct student*prev=NULL;
        struct student * trav=malloc(sizeof(struct student));
        printf("Enter the values to be inserted : ");
        scanf("%d %d %d",&trav->id,&trav->maths,&trav->science);
        trav->next=NULL;
        int found=0;
        while(hi!=NULL){
          if(hi->id==a){  
            if(prev==NULL)
            {
                trav->next=head;
                head=trav;
                found=1;
                break;
                
            }
            else{
                trav->next=prev->next;
                prev->next=trav;
                found=1;
                break;
               
            }
          }
            prev=hi;
            hi=hi->next;
        }
        if(!found)
        {
            printf("the position is invalid");
        }
    }
}

void display_fun()
{
    
    struct student*ptr=head;
    while(ptr!=NULL){
        printf("\nid:%d\n%d\n%d\n--------------\n",ptr->id,ptr->maths,ptr->science);
        ptr=ptr->next;
    }
   
return;
}