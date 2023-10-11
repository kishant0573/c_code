#include<stdio.h>
void display(int *U, int q)
{
    for(int k=0; k<q; k++)
    {
        printf("%d",U[k]);
    }
}

void merge(int *A, int *B, int *U, int m, int n)
{
    int i=0;
    int j=0;
    int k=0;
 {


    while(i<m && i<n)
    {

        if(A[i]>B[j])
        {
            U[k] = B[j];
            j++;
            k++;
        }
        else if(A[i]<B[j])
        {
            U[k] = A[i];
            i++;
            k++;
        }
        else
        {
            U[k] = B[i];
            j++;
            k++;
        }
    }
    while(i<m)
    {
        U[k] = A[i];
        k++;
        i++;
    }
    while(i<n)
    {
        U[k] = B[i];
        k++;
        j++;
    }

  }
}
int main()
{
    int A[] = {1,2,3,4,5};
    int B[] = {11,6,7,8,9};
    int m = sizeof(A)/sizeof(int);
    int n = sizeof(B)/sizeof(int);
    int q =m+n;
    int U[q];
    merge(A,B,U,m,n);
    display(U, q);
    return 0;
}
