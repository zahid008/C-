#include <iostream>

using namespace std;

int isPerfect(int n, int i, int sum)
{
    if(i==n)
        return 0;

    else
    {
        if(n%i==0)
        {
            sum=sum+i;
        }

        if(sum==n)
            return 1;

        i++;
        isPerfect(n,i,sum);
    }


}

int main()
{
    int n=28,i=1, sum=0;
    cout << isPerfect(n,i,sum);
    return 0;
}
