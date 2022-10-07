#include <iostream>

using namespace std;

void perfectNumber(int n1, int n2)
{

    for(int i=n1;i<n2;i++)
    {
        int sum=0;
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==i)
        {
            cout<<i<<"is a perfect number\n";
        }
    }
}

int main()
{
   int n1=1, n2=1000;
   perfectNumber(n1,n2);


}
