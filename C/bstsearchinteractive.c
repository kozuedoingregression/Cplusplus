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

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

struct node *searchnodeiter(struct node *root, int key)
{
    while (root != NULL)
    {
        if (root->data == key)
        {
            return root;
        }
        else if (root->data > key)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return NULL;
}
int main()
{
    int i, n, data, key;
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
    
    printf("enetr element to search :");
    scanf("%d",&key);

    inorder(root);

    struct node *el = searchnodeiter(root, key);
    if (el != NULL)
    {
        printf("\nfound :%d", el->data);
    }
    else
    {
        printf("\nelement not found");
    }
}