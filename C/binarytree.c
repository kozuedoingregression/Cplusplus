#include <stdio.h>
#include <malloc.h>

struct node
{
    struct node *left;
    int data;
    struct node *right;
};

struct node * createnode(int data)
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

int main()
{
    struct node *p = createnode(2);
    struct node *p1 = createnode(1);
    struct node *p2 = createnode(4);

    p->left = p1;
    p->right= p2;
    

    return 0;
}
