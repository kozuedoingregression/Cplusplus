#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode(int data)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->left = NULL;
    new->right = NULL;
}

void insertnode(struct node *root, struct node *temp)
{
    if (temp->data < root->data)
    {
        if (root->left == NULL)
        {
            root->left = temp;
        }
        else
        {
            insertnode(root->left, temp);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = temp;
        }
        else
        {
            insertnode(root->right, temp);
        }
    }
}

void preorder(struct node *root)
{
    if (root != NULL)
    {

        preorder(root->left);
        printf("%d ",root->data);
        preorder(root->right);
    }
}

int main()
{
    int n = 8;
    int a[] = {50, 40, 5, 10, 6, 4, 11, 9};
    int ar[n];

    struct node *root, *temp;
    root = NULL;
    for (int i = 0; i < n; i++)
    {
        temp = createnode(a[i]);
        if (root == NULL)
        {
            root = temp;
        }
        else
        {
            insertnode(root, temp);
        }
    }
    preorder(root);
}