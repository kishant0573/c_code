#include<stdio.h>
#include<stdlib.h>

struct node{
 int data;
 struct node*next;
 };

void display(struct node *ptr)
{
 while(ptr!=NULL)
 {
 printf("%d ",ptr->data);
  ptr = ptr->next;
}
}

int count(struct node *ptr)
{
    int c=0;
    if(ptr == NULL)
        {
         printf("NO DATA found");
        }
     else
          while(ptr != NULL)
     {
         c++;
         ptr = ptr ->next;
     }
     return c;
}
int main()
{
  struct node*head = (struct node*)malloc(sizeof(struct node));
  struct node*second = (struct node*)malloc(sizeof(struct node));
  struct node*third = (struct node*)malloc(sizeof(struct node));
  struct node*fourth = (struct node*)malloc(sizeof(struct node));


   head->data = 87;
   head->next = second;

  second->data = 4;
  second->next = third;

  third->data = 6;
  third->next = fourth;

  fourth->data = 5;
  fourth->next = NULL;

  display(head);
  printf("\n number of element is: %d\n",count(head));
  return 0;

}
