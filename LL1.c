#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next
}
*new;
int main()
{
    new = (struct node*)malloc(sizeof(struct node));
    scanf("%d",&new->data);
    new->next= NULL;
    printf("%d",new->data);
}
