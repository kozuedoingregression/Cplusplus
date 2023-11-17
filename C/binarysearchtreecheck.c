#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
}

int isbst(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!isbst(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isbst(root->right); 
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
        printf("%d", root->data);
        inorder(root->right);
    }
}

int main()
{
    struct node *p = createnode(5);
    struct node *p1 = createnode(3);
    struct node *p2 = createnode(1);
    struct node *p3 = createnode(4);
    struct node *p4 = createnode(6);

    p->left = p1;
    p->right = p4;

    p1->left = p2;
    p1->right = p3;

    inorder(p);
    printf("\n");
    printf("%d", isbst(p));
    printf("\n");

    struct node *s;
    return 0;
}