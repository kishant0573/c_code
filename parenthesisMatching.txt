#include<stdio.h>
#include<string.h>

int top = -1;
char st[100];
char exp[50];
int size = 10;




void push(char data)
{
 if(top == size-1)
 {
     printf("stack overflow!! ");
 }
 else
 {
   top++;
   st[top] = data;
 }

}

void pop()
{
    char data;
    if(top == -1)
    {
        printf("stack was underflow !!");
    }
    else
        {
           data = st[top];
            top--;
        }

}

void parenthesisMatch(char *exp)
{
    int i;
    for(i=0; exp[i]!= '\0'; i++)
    {
        if(exp[i]=='{' || exp[i] == '(' || exp[i]== '[')
            {
                push(exp[i]);
            }
        else if(exp[i]=='}' || exp[i] == ')' || exp[i]== ']')
        {
            if(top == -1)
            {
                printf(" it is unbalance parenthesis !!!");
            }
            else
            {
                pop();
            }

        }
    }
     if(top == -1)
     {
         printf(" parenthesis was match ");
     }
      else
      {
          printf("not matching...!!");
      }

}




int main()
{

    printf("enter the expression: ");
    scanf("%s",exp);

    parenthesisMatch(exp);


}


