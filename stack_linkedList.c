#include<stdio.h>
#include<stdlib.h>


struct node *head =NULL;
struct node *p = NULL;


struct node{
int data;
struct node *next;
};


void push()
{
 int i,x;
 struct node *temp = (struct node*)malloc(sizeof(struct node));

 printf("enter the data for stack: ");
 scanf("%d",&x);

 if(head == NULL)
 {
     temp->data = x;
     temp->next =NULL;
     head = temp;

 }
 else
 {
   temp->data = x;
   temp->next = head;
   head = temp;

 }


}

void display()
{
  struct node *ptr = head;
  if(ptr == NULL)
  {
     printf("stack was empty!!! ");

  }
  else
  {
    while(ptr != NULL)
    {
        printf(" %d ",ptr->data);
        ptr = ptr->next;
    }
  }
}

void pop()
{
   if(head == NULL)
   {
       printf("no data for pop!! ");
   }
   else
    {
     struct node *ptr = head;
     ptr = head;
     head = head->next;
     free(ptr);

     printf("\n item poped !! ");


    }
}

int main()
{
    int choice;
    do
    {
 printf(" \n 1./push 2./pop 3./display 4./exit: ");
 scanf("%d",&choice);

 switch(choice)
 {
   case 1:
       {
         push();
         break;
       }
   case 2:
       {
         pop();
         break;
       }
   case 3:
       {
         display();
         break;
       }
   case 4:
        {
          break;
        }
   default:
        {
          printf("enter right keyword plz!!! ");

        }
 }

}while(choice != 4);
}
