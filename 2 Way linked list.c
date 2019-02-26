#include<stdio.h>
#include<conio.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*head=NULL,*tail=NULL;
void addatbeg(int num)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=num;
    if(head==NULL && tail==NULL)
    {
        head=temp;
        temp->prev=NULL;
        temp->next=NULL;
        tail=temp;
    }
    else
    {
        temp->prev=NULL;
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}
void addatend(int num)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=num;
    if(head==NULL && tail==NULL)
    {
        head=temp;
        temp->prev=NULL;
        temp->next=NULL;
        tail=temp;

    }
    else
    {
        temp->next=NULL;
        temp->prev=tail;
        tail->next=temp;
        tail=temp;
    }
}
struct node * search(int item)
{
    struct node *r;
    r=head;
    while(r!=NULL)
    {
        if(r->data==item)
        {
            return r;
        }
        r=r->next;
    }
    return NULL;
};
void addafter(int num,int num1)
{
    struct node *temp,*loc;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=num;
    loc=search(num1);
    if(loc==NULL)
    {
        printf("\n Insertion not possible");

    }
    else if(loc->next==NULL)
    {
        temp->next=NULL;
        temp->prev=loc;
        loc->next=temp;
        tail=temp;
    }
    else
    {
        temp->prev=loc;
        temp->next=loc->next;
        (loc->next)->prev=temp;
        loc->next=temp;

    }
}
void delatbeg()
{
	struct node *r;
	r=head;
	if(head==NULL && tail==NULL)
	{
		printf("\n deletion not possible");
	}
	else if(r->next==NULL)
	{
		head=NULL;
		tail=NULL;
		free(r);
	}
	else
	{
		head=head->next;
		head->prev=NULL;
		free(r);
	}
}
void delatend()
{
	struct node *r;
	r=tail;
	if(head==NULL && tail==NULL)
	{
		printf("\n deletion not possible");
	}
	else if(head->next==NULL)
	{
		head=NULL;
		tail=NULL;
		free(r);
	}
	else
	{
	    (tail->next)->prev=NULL;
		tail=tail->next;
		free(r);
		
	}
}
void delafter(int num)
{
	struct node *r,*loc;
	loc=search(num);
	if(loc==NULL)
	{
		printf("\n deletion not possible");
	}
	else if(loc->next==NULL)
	{
		printf("\n deletion not possible");
	}
	else
	{
		r=loc->next;
		if(r->next==NULL)
		{
		   loc->next=NULL;
		   tail=NULL;
		}
		else
		{
		 loc->next=r->next;
		 (r->next)->prev=loc;
	    }  
		free(r);
		
	}
}
void display()
{
    struct node *r;
    r=head;
    if(head==NULL && tail==NULL)
    {
        printf("\n linked list is empty");
    }
    while(r!=NULL)
    {
        printf("\n%d",r->data);
        r=r->next;
    }
}
int main()
{
  int choice,num,num1;
  while(1)
  {
      printf("\n1.Insertion at begining");
      printf("\n2.Insertion at end");
      printf("\n3.Insertion after given node");
      printf("\n4.Deletion at begining");
      printf("\n5.Deletion at end");
      printf("\n6.Deletion after given node");
      printf("\n7.Display");
	  printf("\nEnter your choice");
      scanf("%d",&choice);
      switch(choice)
      {
          case 1: printf("enter your num");
                  scanf("%d",&num);
                  addatbeg(num);
                  break;
          case 2:printf("enter your num");
                 scanf("%d",&num);
                 addatend(num);
                 break;
          case 3: printf("enter the num you want to insert");
                  scanf("%d",&num);
                  printf("enter the num after which you want to add");
                  scanf("%d",&num1);
                  addafter(num,num1);
                  break;
          case 4:delatbeg();
                 break;
          case 5:delatend();
                  break;
          case 6:printf("\n enter the num after which you want to delete");
                  scanf("%d",&num);
                  delafter(num);
                  break;
           case 7:display();
                  break;
      }

  }
}
