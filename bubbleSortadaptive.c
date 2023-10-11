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

int bubble(int *A, int size)
{
    int i,j;
    int sorted = 0;
    int temp;
    for(i=0; i<size-1; i++)
    {
        sorted = 1;
        printf(" \n the number passes %d : \n",i+1);
        for(j=0; j<size-1-i; j++)
        {
            if(A[j] > A[j+1])
            {
               temp = A[j];
               A[j] = A[j+1];
               A[j+1] = temp;
               sorted = 0;
            }
            return sorted;
        }
    }
}

int main()
{
  int A[] = {1,2,3,4,5,6,7,8,9};
  int size = sizeof(A)/sizeof(int);
  display(A, size);
  bubble(A, size);
  printf("\n after sorting: ");
  display(A,size);
}
