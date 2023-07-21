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

