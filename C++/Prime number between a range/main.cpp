// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n1=15, n2=100;

    for(int i=n1;i<=n2;i++)
    {
        bool flag=1;
        for(int j=2;j<i/2;j++)
        {
            if(i%j==0)
                flag=0;
        }

        if(flag==1)
            cout<<i <<"This is prime number\n";
        else
            cout<<i <<"This is non prime number\n";




    }
}
