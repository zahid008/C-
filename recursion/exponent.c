#include<stdio.h>
int main()
{
    int a=5,b=1;

    int exponent(int a,int b)
    {
        if(b==0)
        {
            return 1 ;
        }
        else
            return a*exponent(a,b-1);
    }


    printf("%d",exponent(a,b));
}
