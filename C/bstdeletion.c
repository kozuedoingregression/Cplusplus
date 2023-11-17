#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *right, *left;
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

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d", root->data);
        inorder(root->right);
    }
}

struct node *inorderpredecessor(struct node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

struct node *deletenode(struct node *root, int key)
{
    struct node *ipd;
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }
    if (key < root->data)
    {
        root->left=deletenode(root->left, key);
    }
    else if (key > root->data)
    {
        root->right=deletenode(root->right, key);
    }
    else
    {
        ipd = inorderpredecessor(root); 
        root->data = ipd->data;
        root->left = deletenode(root->left, ipd->data);
    }
    return root;
}

int main()
{
    int i, n, key, data;
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

    printf("enetr element to delete :");
    scanf("%d", &key);

    printf("before deletion\n");
    inorder(root);

    deletenode(root, key);

    printf("\nafter deletion\n");
    inorder(root);
}
