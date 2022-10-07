#include <iostream>
#include"node.h"
using namespace std;

int main()
{

  node *head=NULL;
  node *second =NULL;

  head= new node();
  second=new node();


  head->data=4;
  head->next=second;
    return 0;
}
