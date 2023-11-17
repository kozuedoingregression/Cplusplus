#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
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

int checkbst(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!checkbst(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data < prev->data)
        {
            return 0;
        }
        prev = root;
        return checkbst(root->right);
    }
    else
    {
        return 1;
    }
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

int main()
{
    int n, i, data;
    struct node *root, *temp;

    root = NULL;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &data);
        temp = createnode(data);
        if (root == NULL)
        {
            root = temp;
        }
        else
        {
            insertnode(root, temp);
        }
    }

    inorder(root);
    if(checkbst(root)==1)
    {
        printf("\nit is a BST");
    }
    else
    {
        printf("\nnot a BST");
    }
    return 0;
}