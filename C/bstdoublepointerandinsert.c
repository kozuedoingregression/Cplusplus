#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *createnode(int val)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = val;
    new->left = NULL;
    new->right = NULL;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void insertnode(struct node **root, struct node *temp)
{
    if (temp->data < (*root)->data)
    {
        if ((*root)->left == NULL)
        {
            (*root)->left = temp;
        }
        else
        {
            insertnode(&((*root)->left), temp);
        }
    }
    else
    {
        if ((*root)->right == NULL)
        {
            (*root)->right = temp;
        }
        else
        {
            insertnode(&((*root)->right), temp);
        }
    }
}

int main()
{
    int val, n;
    struct node *root, *temp;

    root = NULL;

    printf("number of elements :");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("enter element :");
        scanf("%d", &val);
        temp = createnode(val);
        if (root == NULL)
        {
            root = temp;
        }
        else
        {
            insertnode(&root, temp);
        }
    }

    inorder(root);

    return 0;
}