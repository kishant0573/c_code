#include<stdio.h>

int display(int *arr, int size)
{
    int i;
    int count = 0;
    for(i=0;i<size; i++)
    {
       printf("%d \t",arr[i]);
        count++;
    }
    return count;
}


int main()
{
 int arr[]={1,2,3,4,5,6,7,8,9,11};
 int size = sizeof(arr)/sizeof(int);
 int a;
 a = display(arr,size);
 printf(" the number of element %d",a);

}
