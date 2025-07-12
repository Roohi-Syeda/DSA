#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* link;
};

void insertatend(struct node **head, int data)
{
    
    struct node* newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->link = NULL;
    
    if(*head == NULL)
    {
        *head = newnode;
        return;
    }
    
    struct node * temp = *head;
    while(temp->link !=NULL)
    {
        temp = temp->link;
    }
    
    temp->link = newnode;
}

void print(struct node* head)
{
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head = head->link;
    }
}

int main()
{
  struct node* head  = NULL;
  
  insertatend(&head,10);
  insertatend(&head,20);
  insertatend(&head,30);
  insertatend(&head,40);
  insertatend(&head,50);
  insertatend(&head,60);
  
  
  print(head);
    
    
    
    

    return 0;
}