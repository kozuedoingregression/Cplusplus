#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

void linklistTraversal(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;

    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc (sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    first->data=7;
    first->next=second;

    second->data=8;
    second->next=third;

    third->data=9;
    third->next=fourth;

    fourth->data=10;
    fourth->next=NULL;

    linklistTraversal(first);

    return 0;
}