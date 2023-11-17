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
int countn=0,countln=0,countch=0;

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

void countleafnode(struct node** root)
{
    if((*root) != NULL)
    {
        countleafnode(&(*root)->left);
        if(((*root)->left == NULL) && ((*root)->right == NULL))
        {
            countln++;
        }
        countleafnode(&(*root)->right);
    }

}
void countchildnode(struct node** root)
{
    if((*root) != NULL)
    {
        countchildnode(&(*root)->left);
        if(((*root)->left == NULL) && ((*root)->right != NULL) || ((*root)->left != NULL) && ((*root)->right == NULL) )
        {
            countch++;
        }
        countchildnode(&(*root)->right);
    }

}


void countnode(struct node **root)
{
    if (*root != NULL)
    {
        countnode(&(*root)->left);
        countn++;
        countnode(&(*root)->right);      
    }
}

int main()
{
    int n, i, data, *count = 0;
    struct node *root, *temp;

    root = NULL;
    
    printf("enter no. of elements :");
    scanf("%d", &n);
    while (n--)
    {
        printf("enter elements :");
        scanf("%d",&data);
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

    countnode(&root);
    countleafnode(&root);
    countchildnode(&root);

    printf("Total no. of nodes :%d\n",countn);
    printf("Total no. of leafnodes :%d\n",countln);
    printf("Total no. of nodes with one child :%d\n",countch);

    return 0;
}