#include<stdio.h>

void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void heapify(int array[], int size, int i)
{
  if (size == 1)
  {
    printf("Single element in the heap");
  }
  else
  {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < size && array[l] > array[largest])
      largest = l;
    if (r < size && array[r] > array[largest])
      largest = r;
    if (largest != i)
    {
      swap(&array[i], &array[largest]);
      heapify(array, size, largest);
    }
  }
}








int main()
{
    int array[]={9,3,2,1,4,5,10,4,5};
    int size=sizeof(array)/sizeof(int);

    for (int i = size / 2 - 1; i >= 0; i--)
    {
      heapify(array, size, i);
    }


    for (int i = 0;i<size;i++)
    {
      printf("%d  ",array[i]);
    }


}
