#include<stdio.h>

void selection(int *arr, int size)
{
    int i,j ,min,temp;
    for(i=0; i<size; i++)
    {
      min = i;
      for(j=i+1; j<=size-1; j++)
      {
          if(arr[j] < arr[min])
          {
              min = j;
          }

             temp = arr[i];
             arr[i] = arr[min];
             arr[min] = temp;
      }


    }
}

 void display(int *arr, int size)
 {
   int i;
     for(i=0; i<size; i++)
     {
         printf(" %d ",arr[i]);
     }
 }

 int main()
 {
     int arr[] = {5,6,9,2,54,1};
     int size = sizeof(arr)/sizeof(int);
     display(arr,size);
     selection(arr,size);
     printf(" \n after sorting: \n ");
     display(arr,size);
 }
