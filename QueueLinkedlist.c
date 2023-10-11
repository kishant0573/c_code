#include<stdio.h>
#include<stdlib.h>

struct node *f = NULL;
struct node *r = NULL;

struct node{
   int data;
   struct node *next;
};

void display(struct node *ptr)
{
  printf("displaying the element of queue \n ");
  while(ptr != NULL)
  {
      printf("the element is: %d \n",ptr->data);
      ptr = ptr->next;
  }
}

void enqueue(int data)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("queue is full !!");
    }
    else
    {
        ptr->data = data;
        ptr->next = NULL;
        if(f==NULL)
        {
            f=r=ptr;
        }
        else
        {
          r->next = ptr;
          r=ptr;
        }
    }
}

int main()
{
  enqueue(5);
  enqueue(7);
  display(f);
}
