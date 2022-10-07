#include<stdio.h>
int main()
{
    int n=3,b=4;

    int sum(int n) //addition
    {
        if(n==0)
            return 0;
        else
            return n+sum(n-1);
    }


    //printf("%d",sum(n));



    int expo(int a,int b) //exponential
    {
        if(b==0)
            return 1;
        else
            return pow(a,b-1)*a;
    }

    //printf("%d",expo(n,b));






    int printNumber(int n)   //print natural number in descending order
    {
        if (n==0)
            printf("%d",n);

        else
        {
            printf("%d",n);
            n=printNumber(n-1);

        }

    }

    //printNumber(n);


    int p(int n)  //print natural number in ascending order
    {
        if(n)
            p(n-1);

        else
            return;

        printf("%d",n);

    }
    //p(n);



    int arr[]={1,2,3,4,5};
    int s=0,l=4;

    int printarray(int arr[],int s, int l)
        {
            if(s>l)
            {
                return;
            }


            printf("%d",arr[l]);
            printarray(arr,s,l-1);

        }



    printarray(arr,s,l);






}
