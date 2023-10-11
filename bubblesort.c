#include<stdio.h>

void display(int *A , int size)
{
  int i;
  for(i=0; i<size; i++)
  {
      printf("%d  ",A[i]);
  }
   printf(" \n ");
}

void bubble(int *A, int size)
{
    int i,j;
    int temp;
    for(i=0; i<size-1; i++)
    {
        for(j=0; j<size-1-i; j++)
        {
            if(A[j] > A[j+1])
            {
               temp = A[j];
               A[j] = A[j+1];
               A[j+1] = temp;
            }
        }
    }
}

int main()
{
  int A[] = {7,8,4,5,9,1,3};
  int size = sizeof(A)/sizeof(int);
  display(A, size);
  bubble(A, size);
  printf("\n after sorting: ");
  display(A,size);
}
