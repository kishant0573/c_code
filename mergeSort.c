#include<stdio.h>

void mergeSort(int *arr, int size)
{
  int i,j,k;
}




void display(int *arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }
}

int main()
{
   int size,i;
   int arr[100];
   printf("enter the size of arr: ");
   scanf("%d",&size);
   printf(" \n enter the element of arr: ");
   for(i=0; i<size; i++)
   {
       scanf("%d",&arr[i]);
   }
   display(arr,size);
}
