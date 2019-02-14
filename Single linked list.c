#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
}*p=NULL;
void addatbeg(int num)
{
    struct node *temp;
    temp= (struct node *)malloc(sizeof(struct node));
    temp->data=num;
    if(p==NULL)
    {
        temp->next=NULL;
        p=temp;
    }
    else
    {
        temp->next=p;
        p=temp;
    }

}
int search(int item)
{
    struct node *r;
    r=p;
    while(r!=NULL)
    {
        if(r->data==item)
        {
            return r;
        }
        r=r->next;
    }
    return NULL;
}
void addafternode(int num,int num1)
{
    struct node *temp,*loc;
    temp= (struct node *)malloc(sizeof(struct node));
    temp->data=num;
    loc=search(num1);
    if(p==NULL)
    {
        printf("\n Linked List is empty...!!\n");
    }
    else if(loc==NULL && p != NULL)
    {
        printf("\n Node does not exist...!!! \n");
    }
    else if(loc->next == NULL)
    {
        loc->next=temp;
        temp->next = NULL;

    }
    else{

        temp->next = loc->next;
        loc->next = temp;
    }

}
void addatend(int num)
{
    struct node *temp;
    temp= (struct node *)malloc(sizeof(struct node));
    temp->data=num;
    if(p==NULL)
    {
        temp->next=NULL;
        p=temp;
    }
    else
    {
        struct node *x;
        x=p;
        while(x->next != NULL)
        {
            x=x->next;
        }
        x->next=temp;
        temp->next=NULL;
    }

}
void display()
{
    struct node *r;
    r=p;
    if(r==NULL)
    {
        printf("\n Linked List is empty...!!!\n");
    }
    else{

        while(r != NULL)
        {
            printf("\n %d",r->data);
            r=r->next;
        }
    }
}
void delatbeg()
{
    struct node *r;
    r=p;
    if(r==NULL)
    {
        printf("\n Linked List is Empty...!!!\n");
    }
    else
    {
        p=r->next;
        free(r);
    }
}
void delatend()
{
    struct node *r;
    r=p;
    if(r==NULL)
    {
        printf("\n Linked List is Empty...!!!\n");
    }
    else
    {
        struct node *x;
        x=r->next;
        if(r->next ==NULL)
        {
            p=NULL;
            free(r);
        }
        else{
                while(x->next != NULL)
                {
                    r=x;
                    x=x->next;

                }
                r->next=NULL;
                free(x);

        }
    }
}
void main()
{
    int num,choice,num1;
    while(1)
    {
        printf("\n\n Menu \n\n");
        printf("\n 1. Insertion at beginning");
        printf("\n 2. Insertion at end");
        printf("\n 3. Insertion after given node");
        printf("\n 4. Deletion at beginning");
        printf("\n 5. Deletion at end");
        printf("\n 6. Display");
        printf("\n\n Enter the choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("\n Enter the number : ");
                    scanf("%d",&num);
                    addatbeg(num);
                    break;
            case 2: printf("\n Enter the number : ");
                    scanf("%d",&num);
                    addatend(num);
                    break;
            case 3: printf("\n Enter the number : ");
                    scanf("%d",&num);
                    printf("\n Enter the node after which you want to insert  : ");
                    scanf("%d",&num1);
                    addafternode(num,num1);
                    break;
            case 4: delatbeg();
                    break;
            case 5: delatend();
                    break;
            case 6: display();
                    break;
        }
    }
}
