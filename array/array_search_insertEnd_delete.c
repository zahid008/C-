#include<stdio.h>

int main()
{
    int arr[]={1,2,3,4,5,6};
    int length=sizeof(arr)/sizeof(int);

    /*int position=findElelement(arr,length,40);
    printf("%d",position);*/

    length=deleteElement(arr,length,3);

    for(int i=0;i<length;i++)
    {
        printf("%d",arr[i]);
    }
}


int findElelement(int arr[], int length, int key)
{
    for(int i=0;i<length;i++)
    {
        if(arr[i]==key)
            return i;
    }
    return -1;
}

int deleteElement(int arr[], int length,int key)
{
    int position=findElelement(arr,length,key);

    if(position==-1)
        return length;

    for(int i=position;i<length;i++)
    {
        arr[i]=arr[i+1];

    }
    return length-1;
}
