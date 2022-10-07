#include <iostream>
#include"queue.h"
using namespace std;

int main()
{
    queue q;
    q.enqueue(10);
    q.enqueue(11);
    q.enqueue(12);
    q.enqueue(13);

    for(int i=0;i<=q.rearIndex();i++)
    {
        cout<<q.dequeue()<<"\n ";
    }
    return 0;
}
