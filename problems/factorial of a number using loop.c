#include<stdio.h>
int factorial(int n)
{
    int fac=1;
    for(int i=0;i<n;i++)
    {
        fac=fac*(n-i);

    }
    return fac;
}
void main()
{
    int n=4;

    printf("%d",factorial(n));
}
