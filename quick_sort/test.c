#include<stdio.h>


void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int number[],int first, int last)
{
  int pivot=number[last], p=last;
  int i=first-1;

  for (int j=first;j<last;j++)
  {
      if(number[j]<=pivot)
      {
          i=i+1;
          swap(&number[i],&number[j]);
      }

  }
      swap(&number[i+1],&number[p]);
      return (i+1);

}
void quicksort(int number[],int first,int last)
{
    if(first<last)
    {
    int q=partition(number,first,last);
    quicksort(number,first,q-1);
    quicksort(number,q+1,last);
    }
}

int main()
{
   int i, number[]={2,5,3,8,9,4,1,7,10,6,100,1000,0,-9};
   int  count=sizeof(number)/sizeof(int);
   quicksort(number,0,count-1);

   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);

   return 0;
}
