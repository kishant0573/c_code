#include<stdio.h>

int main()
{
    int num=10,recr;

    recr = factt(num);
    printf(" the factorial of %d is %d ", num, recr);
}

int factt(int num)
{

    int i,fact=1;
    if(num == 0 )
    {
        printf(" factorial of 0 is 1 ");

    }
    else
    {
        for(i=1; i<=num; i++)
        {
            fact = i * fact;
        }
    }
    return fact;
}
