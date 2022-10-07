#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5, 18};
    int i=0;
    int n=sizeof(arr)/sizeof(int);

    void printArray(int arr[], int i, int n)
    {
        if(i>=n)
        {
            return;
        }

        else
        {
            printf("%d ",arr[i]);
            printArray(arr,i+1,n);
        }
    }

   // printArray(arr,i,n);

    void printArrayp(int arr,int i, int n)   //using pointer
    {
        int *ptr=arr;
        if(i>=n)
            return;

        else
        {
            printf("%d ",*(ptr+i));
            printArrayp(arr,i+1,n);
        }
    }

    // printArrayp(arr,i,n);



     void printAR(int arrr, int i, int n)
     {
         if(i>=n)
            return;

         else
         {
             printf("%d ",arr[n-1-i]);
             printAR(arr,i+1, n);
         }
     }

     //printAR(arr,i,n);



    int key=1;

    void searchArray(int arr[], int i, int n, int key)
    {
        if(i>=n)
        {
            return;
        }

        else
        {
            if(arr[i]==key)
                printf("%d,%d ",arr[i],i);
            else
                searchArray(arr,i+1,n,key);
        }
    }

    //searchArray(arr,i,n,key);

    int arr2[]={0,0,3,2,1};


    void copyArray(int *arr, int *arr2, int i, int n)
    {
        if(i>=n)
        {
            return;
        }

        else
        {
            arr2[i]=arr[i];

            copyArray(arr,arr2,i+1,n);

        }
    }

    copyArray(&arr,&arr2,i,n);

    for(int k=0;k<n;k++)
    {
      printf("%d ",arr2[k]);
    }














































































































































}





