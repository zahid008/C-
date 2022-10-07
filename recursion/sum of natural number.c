#include<stdio.h>
int main()
{
    int n=3;


    int sum(int n)
    {
        if (n==0)
        {
            return;
        }

        else
        {
            return n+sum(n-1);
        }
    }


    printf("%d",sum(n));
}
