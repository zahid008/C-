#include<stdio.h>
int main()
{
    int n=1234, count =0;


    int countDigit (int n, int count)
    {
        if(n==0)
            return count;
        else
        {
            n=n/10;
            count++;
            countDigit(n,count);

        }

    }

    printf("%d",countDigit(n,count));
}

