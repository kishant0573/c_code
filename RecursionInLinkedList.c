#include<stdio.h>
int top = -1;
int x,i;
int size = 20;
int stack[20];

void push()
{
    if(top >= size-1)
    {
        printf("stack is overflow\n ");
    }
    else
    {
        printf("enter the value to push: ");
        scanf("%d",&x);
         top++;
        stack[top]=x;

    }
}

void display()
{
    if(top == -1)
    {
        printf("there are no data in stack:\n");
    }
    else
    {
        for(i = size-1; i>-1; i--)
        {
            printf("%d: ",stack[i]);
        }

    }
}

int main()
{
    int choise;
    int top = -1;
    printf("enter the size of stack: ");
    scanf("%d",&size);
   // int stack[size];
    do
    {
    printf("enter your choise 1./push and 2./display : ");
    scanf("%d",&choise);
    switch(choise)
    {
        case 1:
        {
           push();
           break;
        }
        case 2:
          {
              display();
              break;
          }
         case 3:
         {
             printf("exit ");
             break;
         }
         default:
         {
             printf("enter write choise ");
         }
    }
}while(choise != 3);
return 0;
}
