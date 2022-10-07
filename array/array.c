#include<stdio.h>

int main()
{
    int arr[]={1,2,3,4,5,6,7},as[1],split=1,length=sizeof(arr)/sizeof(int);

   for(int i=0;i<length;i++)
   {
       if(i<=split)
       {
           as[i]=arr[i];
       }


       arr[i]=arr[split+1+i];



       printf("%d\n",arr[i]);
   }


}
