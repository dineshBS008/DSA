#include<stdio.h>
#include<stdlib.h>

// creating a node and head pointer
struct node
{
    int info;
    struct node* next;
};
struct node *head = NULL;

void beginInsert()
{
    struct node *ptr;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node *));
    if(ptr==NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter value:\n");
        scanf("%d",&item);
        ptr->item = item;
        ptr->next = head;
        head = ptr;
        printf("\nNode inserted");
    }
}
void randomInsert()
{
    int i,loc,item;
    struct node *ptr,*temp;
    ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter element value");
        scanf("%d",&);
    }
}
void positionInsert()
void beginDelete()
void lastDelete()
void posDelete()
void display()

int main()
{
    int choice;
    while (1)               //1 for boolean and while is infinte loop ram full then stops or exit option
    {
        printf("Enter:\n");
        printf("\n1 for beginInsert \n2 for lastInsertt \n3 for positionInsert \n4 for beginDelete \n5 for lastDelete \n6 for posDelete \n7 for display \n");
        scanf("%d",&choice);    
    }
    switch (choice)
    {
        case 1:
        lastInsert();
        break;
    
        case 2:
        lastInsert()
        break;

        case 3:
        positionInsert()
        break;
    
        case 4:
        beginDelete()
        break;

        case 5:
        lastDelete()
        break;
    
        case 6:
        posDelete()
        break;

        case 7:
        display()
        break;
    
    default:
        break;
    }
    
    return 0;
}