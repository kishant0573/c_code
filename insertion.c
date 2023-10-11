#include<stdio.h>

void insertion(int *arr,int size)
{
  int i,j,key;
 for(i=1; i<size; i++)
{
  key = arr[i];
 //printf("  key %d \t",key);
  j = i-1;

while(j>=0 && arr[j]>key)
{
  arr[j+1] = arr[j];
    j--;

}

   arr[j+1] = key;

}

}

void display(int *arr, int size)
{
  int i;
for(i=0; i<size; i++)
{
 printf(" %d \t", arr[i]);
}
}



int main()
{
 int arr[] = {5,3,1,9,8,2};
int q;
 int size = sizeof(arr)/sizeof(int);
display(arr,size);
 insertion(arr, size);
 printf("\n after sorting: \n");
 display(arr,size);

}
