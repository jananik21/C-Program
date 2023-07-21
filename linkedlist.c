#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node* left;
    struct Node* right;
};
int isSumTree(struct Node* root)
{
    if (root == NULL || (root->left == NULL && root->right == NULL))
        return 1;
    int left_sum = 0, right_sum = 0;
    if (root->left != NULL)
        left_sum = root->left->val;
    if (root->right != NULL)
        right_sum = root->right->val;
    return (root->val == left_sum + right_sum &&
            isSumTree(root->left) &&
            isSumTree(root->right));
}
struct Node* newNode(int val)
{
    struct Node*node = (struct Node*)malloc(sizeof(struct Node));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int main()
{
    int r,a,b,c,d,e;
    scanf("%d",&r);
    struct Node* root = newNode(root);
    root->left = newNode(a);
    root->right = newNode(b);
    root->left->left = newNode(c);
    root->left->right = newNode(d);
    root->right->right = newNode(e);
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if (isSumTree(root))
        printf("True");
    else
        printf("False");
    return 0;
}
