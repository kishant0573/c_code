#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
};
void display(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
}

struct node*create(struct node *ptr)
{
   struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data= 7;
    head->next = NULL;

    return head;

}
int main()
{

   // struct node*second = (struct node*)malloc(sizeof(struct node));
    //struct node*third = (struct node*)malloc(sizeof(struct node));
    //struct node*fourth = (struct node*)malloc(sizeof(struct node));

   /* head->data = 5;
    head->next = second;

    second->data =1;
    second->next = third;

    third->data = 6;
    third->next = fourth;  */




  head = create(head);
    display(head);

    return 0;
}
