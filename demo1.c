#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};


void display(struct node *head)
{
    struct node *ptr = head;

  do{
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }while(ptr != NULL);
}


struct node *create(int n)
{
    int i =0;
    struct node *head = NULL;
    struct node *temp = NULL;
    struct node *p = NULL;

    for(i=0; i<n ; i++)
    {
        struct node *temp = (struct node*)malloc(sizeof(struct node));

        printf("enter the data for node %d : ",i +1);
        scanf("%d",&(temp->data));
        temp->next = NULL;

        if(head == NULL)
        {
            head = temp;
        }
        else
        {
            p = head;
            while(p->next!=NULL)
            {

                p = p->next;
            }
                p->next = temp;
                p = temp;
                p->next = head;

        }
   }
    return head;
}

struct node*firstdeletion(struct node*head){

 struct node*ptr = head;
 head=head->next;
 free(ptr);
 return head;
}


int main()
{
    int n=0;
    struct node *head =NULL;
    printf("\n how many node do you want: ");
    scanf("%d",&n);
    head = create(n);
    printf("when no deletion \n");
    display(head);
   // printf("\n after deletion \n");
   // head = firstdeletion(head);

    display(head);
    return 0;
}
