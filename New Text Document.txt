#include<stdio.h>

int f = -1;
int r = -1;
int Q[100];

int size;

void Enqueue()
{
    int data;

    if(f == -1 && r == -1)
    {
        f = 0;
        r = 0;
        printf("enter the data :");
            scanf("%d",&data);
         Q[r] = data;
    }
    else if((r+1)%size == f)
    {
        printf("queue is overflow \n");
    }
    else
    {
          printf("enter the data :");
            scanf("%d",&data);
        r = (r+1)%size;
        Q[r] = data;
    }

}

void display()
{
    int i ;
    if( f==-1 && r ==-1)
    {
        printf("it is underflow !! ");

    }
    else
    {
        if(f==0)
        {
            while(f<=r)
            {
                printf(" %d ",Q[f]);
                f= (f+1)%size;
            }
        }
    }
}
void dequeue()
{
    if(r==-1 && f==-1)
    {
        printf("underflow!! ");
    }
    else if(r==f)
    {
        r=-1;
        f=-1;
    }
    else
    {
        f=0;
        printf("deleted element are %d ", Q[f] );
        f= (f+1)%size;

    }
}



int main()
{
    int choice;
    printf("enter the size of Q: ");
    scanf("%d",&size);

    while(1)
    {
        printf(" \n 1./enqueue 2./dequeue 3./display 4./exit :");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
        {

            Enqueue();
            break;
        }
        case 2:
        {
            dequeue();
            break;

        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            exit(0);
        }
        default:
            printf("enter correct keyword !!!");
        }
    }
    // while(choice != 4);
}
