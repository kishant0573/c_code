#include<stdio.h>

int FRONT = -1;
int r = 0;
int queue[100];
int size;
int data;

void insert(int data)
{


    if(r == size-1)
    {
        printf("Q was full !! \n");
    }
    else
    {

        r++;
        queue[r] = data;

    }
}

void display()
{
    int i;
    if(r == -1)
    {
        printf("queue was underflow ");
    }
    else
    {
        for(i=0; i<=r; i++)
        {
         printf("%d ",queue[i]);
        }
    }
}


int main()
{
    int choise,data;
    printf("enter the size of Q: ");
    scanf("%d",&size);
    do
    {
        printf("1./queue 2./dequeue 4./exit 3./display: ");
        scanf("%d",&choise);

        switch(choise)
        {
        case 1:
        {
            printf("enter the data for Q: ");
            scanf("%d",&data);
            insert(data);
            break;
        }
        /*     case 2:
               {
                  dequeue();
                  break;
               }               */
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
            printf("entering wrong choise !!! ");
        }
        }
    }
    while(choise != 4);
    return 0;

}
