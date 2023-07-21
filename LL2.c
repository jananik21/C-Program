#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next
}
*new,*temp= NULL,*head = NULL;
void create()
{
    int n;
    scanf("%d",&n);
    while(n--){
      new = (struct node*)malloc(sizeof(struct node));
    scanf("%d",&new->data);
    new->next= NULL;
    if(head == NULL)
    {
        head = new;
        temp = new;
    }
    else
    {
        temp->next = new;
        temp = new;
    }
    }
}
void display()
{
    temp = head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}
int main()
{
    create();
    display();
}
