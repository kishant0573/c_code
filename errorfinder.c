#include<stdio.h>
#include<stdlib.h>

int stack[100];
int top = -1;
int x,i;

void push (int size)
{
  if (top >= size-1)
  {
    printf ("stack is overflow: ");
  }
  else
    {
        printf("enter data to stack: ");
        scanf("%d",&x);
        top++;
        stack[top] = x;

    }
}
void display(int size)
{
  if(top == -1)
  {
      printf("there are no data available: \n");
  }
   else
    {
    for(i=size-1; i>=0; i--)
    {
        printf("%d \t",stack[i] );
        printf(" ");

    }
   }
}

int
main ()
{
  int choice,size;
  printf ("enter the size of stack: ");
  scanf ("%d", &size);
  int stack[size];
  int top =-1;
  do
  {
  printf ("\n 1./push 2./pop 3./display 4./exit : ");
  scanf ("%d", &choice);
      switch (choice)
	{
	case 1:
	  {
	    push(size);
	    break;
	  }
	case 2:
	  {
	   // pop();
	    break;
	  }
    case 3:
	  {
	   display (size);
	    break;
	  }
	case 4:
	  {
	    break;
	  }
	default:
	  {
	    printf ("enter correct keyword !! ");
	  }
	}

    }
  while (choice != 4);
  return 0;
  }

