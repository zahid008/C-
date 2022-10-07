#include <iostream>

using namespace std;

void perfectNumber(int n1, int n2)
{
    if(n1>n2)
        return;
    else
    {
        int sum=0;
        for(int i=1;i<n1;i++)
        {
            if(n1%i==0)
            {
                sum=sum+i;
            }

            if(sum==n1)
            {
                cout<<n1<<"is a perfect number\n";
                break;
            }

        }
        n1=n1+1;
        perfectNumber(n1,n2);
    }
}
int main()
{
    int n1=6, n2=10000;
    perfectNumber(n1,n2);
}
