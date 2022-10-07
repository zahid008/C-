// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int isPerfect(int n)
{
    int sum=0;
    for(int i=1;i<n-1;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }

    if(sum==n)
        return 1;
    else
        return 0;


}
int main() {
    // Write C++ code here
  int n= 7;
  cout<<isPerfect(n);
}
