//  write aprogram in c to implement fractional Knapsack problem
#include<stdio.h>

int main()
{
    int n,i,j;
    float w[10],p[10],pw[10],temp,wt;
    printf("Enter the number of items:");
    scanf("%d",&n);
    printf("Enter the weight and profit of each item: ");
    for(i=0;i<n;i++)
    {
        scanf("%f%f",&w[i],&p[i]);
        pw[i]=p[i]/w[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(pw[i]<pw[j])
            {
                temp=pw[j];
                pw[j]=pw[i];
                pw[i]=temp;
                temp=w[j];
                w[j]=w[i];
                w[i]=temp;
                temp=p[j];
                p[j]=p[i];
                p[i]=temp;
            }
        }
    }
    printf("Enter the weight of knapsack:");
    scanf("%f",&wt);
    float x[10],tp=0;
    for(i=0;i<n;i++)
    {
        x[i]=0;
    }
    for(i=0;i<n;i++)
    {
        if(w[i]>wt)
        {
            break;
        }
        else
        {
            x[i]=1;
            tp=tp+p[i];
            wt=wt-w[i];
        }
    }
    if(i<n)
    {
        x[i]=wt/w[i];
        tp=tp+(x[i]*p[i]);
    }
    printf("The maximum profit is:%f",tp);
    return 0;
}