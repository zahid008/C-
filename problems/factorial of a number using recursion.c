#include<stdio.h>

int factorial(int n)
{
    if (n==0)
        return 1;
    else
        return n*factorial(n-1);

}

void main()
{   int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("%d",factorial(n));


}
