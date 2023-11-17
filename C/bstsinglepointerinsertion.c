#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d", root->data);
        preorder(root->left);
        preorder(root->right);
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

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d", root->data);
    }
}

struct node *createnode(int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = val;
    n->left = NULL;
    n->right = NULL;

    return n;
}

void insertnode(struct node *root, struct node *temp)
{

    if ((temp->data) < (root->data))
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

int main()
{
    struct node *root=NULL, *temp;
    int val;
    int check;

    do
    {
        printf("enter an element :");
        scanf("%d", &val);
        temp = createnode(val);
        if (root == NULL)
        {
            root = temp;
        }
        else
        {
            insertnode(root, temp);
        }
        printf("insert another element? 1/0 \n ");
        scanf("%d", &check);
    } while (check == 1);

    preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postorder(root);
    printf("\n");

    return 0;
}
