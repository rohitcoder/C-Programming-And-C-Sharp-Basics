#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
int data;
struct node *next;
}*p=NULL;

void AddAtBeg(int num){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = num;
    if(p==NULL){
      temp->next=NULL;
      p=temp;
    }else{
      temp->next=p;
      p=temp;
    }
}
void AddAtEnd(int num){
    struct node *temp,*r;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = num;
    r=p;
    if(p==NULL){
        temp->next=NULL;
        p=temp;
    }else{
        while(r->next!=NULL){
            r=r->next;
        }
        temp->next=NULL;
        r->next=temp;
    }

}
int search(int item){
    struct node *r;
    r=p;
    while(r!=NULL){
        if(r->data==item){
            return r;
        }
        r=r->next;
    }
    return NULL;
}
void AddAfterNode(int num, int num1){
    struct node *temp,*loc;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = num;
    loc=search(num1);
    if(p==NULL && loc==NULL){
        printf("No node found");
    }else if(loc->next==NULL){
        temp->next=loc->next;
        loc->next =temp;
    }else{
        temp->next=loc->next;
        loc->next=temp;
    }
}
void display(){
    struct node *r;
    r=p;
    if(p==NULL){
        printf("\nLinked list is empty");
    }else{
        while(r!=NULL){
            printf("\n%d",r->data);
            r=r->next;
        }
    }
}
int main(){
    int choice,num,num1;
    while(1){
    printf("\n1. Add at begining");
    printf("\n2. Add at end");
    printf("\n3. Add after given node");
    printf("\n4. Print");
    printf("\n\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice){
    case 1:
            printf("\n Enter number: ");
            scanf("%d",&num);
            AddAtBeg(num);
            break;
    case 2: printf("\n Enter number: ");
            scanf("%d",&num);
            AddAtEnd(num);
            break;
    case 3: printf("\n Enter position: ");
            scanf("%d",&num);
            printf("\n Enter number: ");
            scanf("%d",&num1);
            AddAfterNode(num1, num);
            break;
    case 4:display();
           break;
    }

    }

}

