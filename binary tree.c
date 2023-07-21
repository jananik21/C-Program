#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
}*root,*temp,*newnode,*temp1;
void create(int num)
{
    int flag =0;
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data = num;
        newnode->left=NULL;
        newnode->right=NULL;
        if(root==NULL)
        {
            root=newnode;
            temp=newnode;
        }
        else
        {
            temp=root;
            temp1=root;
            while(1)
            {
                if(temp->left==NULL)
            {
                temp->left=newnode;
                break;

            }
            else if(temp->right==NULL)
            {
                temp->right=newnode;
                break;
                //temp=newnode;
            }
            else if(flag ==0)
            {
                temp = temp->left;
                flag = 1;

            }
            else if(flag==1)
            {
                temp =temp1->right;
                flag=0;
                temp1=temp1->left;
            }
            }
        }
    }

void printTree(struct node* node) {
    int i;
    if (node!= NULL)
    {
    printTree(node->left);
    printf("%d\n", node->data);
    printTree(node->right);
    }
}
int main()
{
    int num;
    do{
    scanf("%d",&num);
    create(num);
    }
    while(num>0);

    printTree(root);

}


