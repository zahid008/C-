#ifndef QUEUE_H
#define QUEUE_H
using namespace std;
#define MAX 1000

class queue

{
    int front,rear,size;

    public:

        int q[MAX];
        queue();
        bool enqueue(int n);
        int dequeue();
        bool isEmpty();
        int rearIndex();
        int frontIndex();


    protected:

    private:
};

#endif // QUEUE_H

