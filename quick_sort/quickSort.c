#include<stdio.h>

void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int number[],int first, int last)
{
  int i, j, pivot;
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            swap(&number[i],&number[j]);
         }
      }

      swap(&number[j],&number[pivot]);
      return j;

}
void quicksort(int number[],int first,int last)
{
    if(last>first)
    {
    int j=partition(number,first,last);
    quicksort(number,first,j);
    quicksort(number,j+1,last);
    }
}

int main()
{
   int i, count=5, number[]={10,6,2,3,5};
   quicksort(number,0,count-1);

   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);

   return 0;
}
