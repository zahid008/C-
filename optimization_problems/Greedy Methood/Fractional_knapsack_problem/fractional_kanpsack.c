#include<stdio.h>

void rearrange(float arr1[],  float weights[], float profit[], int n)
{
    int i, j;
    float tmp, temp2, temp3;
      for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr1[j] >arr1[i])
            {
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;

                temp2=profit[i];
                profit[i]=profit[j];
                profit[j]=temp2;

                temp3=weights[i];
                weights[i]=weights[j];
                weights[j]=temp3;
            }
        }
    }

}

float knapsack(float weights[], float profit[],int n, int mw)
{


    int tw=0;
    float x[n];
    float ratio[n];

    for(int i=0;i<n;i++)
    {
        ratio[i]=profit[i]/weights[i];
    }

    rearrange(ratio,weights,profit,n);



    for(int i=0;i<n;i++)
    {
        x[i]=0;
    }


    for(int i=0;i<n;i++)
    {
        if(tw+weights[i]<=mw)
        {
            x[i]=1;
            tw=tw+weights[i];
        }
        else
        {
            x[i]=(mw- tw )/ weights[i];
            tw = mw;
            break;
        }
    }
    printf("Weights:");
    for(int i=0;i<n;i++)
    {
        printf("%.3f  ",weights[i]);
    }
     printf("\n\n");
      printf("Profit:");
    for(int i=0;i<n;i++)
    {
        printf("%.3f  ",profit[i]);
    }
     printf("\n\n");
      printf("ratio:");
      for(int i=0;i<n;i++)
    {
        printf("%.3f  ",ratio[i]);
    }
    printf("\n\n");
     printf("X:");
    for(int i=0;i<n;i++)
    {
        printf("%.3f  ",x[i]);
    }
    printf("\n\n");


    float total_profit=0;
    for(int i=0;i<n;i++)
    {
       total_profit=total_profit+(x[i]*profit[i]);
    }

    return total_profit;


}


void main()
{
    float weights[]={2,3,5,7,1,4,1};
    float profit[]={10,5,15,7,6,18,3};
    int objects[]={0,1,2,3,4,5,6};
    int lt=sizeof(profit)/sizeof(float);
    int n=sizeof(objects)/sizeof(int);
    int mw=15;


    printf("Max Profit: %.2f",knapsack(weights,profit,n,mw));
}
