#include<stdio.h>
int main()
{
    int n=101,remainder=0,reversed=0
    ;

    int palindrome(int n, int remainder, int reversed)
    {
        if(n==0)
            return reversed;

        else
        {
           remainder=n%10;
           reversed=reversed*10+remainder;
           n=n/10;
           palindrome(n,remainder,reversed);
        }
    }


    printf("%d",palindrome(n,remainder,reversed));

    return 0;
}
