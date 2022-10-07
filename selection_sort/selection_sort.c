#include<stdio.h>
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selection_sort(int arr[], int n)
{

    for(int i=0;i<n-1;i++)
    {
        int min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }
        swap(&arr[i],&arr[min_index]);
    }
}

void main()
{
    int arr[]={9,4,10,5,2,8,6};
    int n = sizeof(arr)/sizeof(int);
    selection_sort(arr,n);

    for(int i =0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

}
