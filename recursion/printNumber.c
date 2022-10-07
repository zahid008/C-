#include<stdio.h>
int main()
{
    int n=5;


    void printDs(int n)  //n to 0
    {
        if(n==0)
            {
                printf("%d",n);
                return ;}
        else
        {
            printf("%d",n);
            printDs(n-1);
        }

    }

    //printDs(n);

    int x=0;

    void  printAS(int n, int x)  //0 to n
    {
        if(x==n)
        {
            printf("%d",n);
            return;
        }

        else
        {
            printf("%d",x);

            printAS(n,x+1);
        }
    }

    printAS(n,x);
}
