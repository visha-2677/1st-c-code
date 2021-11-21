#include<stdio.h>
int max(int arr[] , int size);
int min(int arr[] , int size);
int sum(int arr[],int size);
int avge(int arr[],int size);
int count(int arr[],int size);
int main()
{
    int a[10],i;
    printf("enter 10 elements \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    int maximum=max(a,10);
    int minimum=min(a,10);
    int sum1=sum(a,10);
    float av =avge(a,10);
    int c =count (a,10);
    printf("\nmaximum = %d",maximum);
    printf("\nminimum = %d",minimum);
    printf("\nsum = %d",sum1);
    printf("\naverage = %.2f",av);
    printf("\ncount = %d",c);

}
int max(int arr[] , int size)
{
    int i,t=arr[0];
    for(i=1;i<size;i++)
    {
        if(t<arr[i])
            t=arr[i];

    }
    return t;
}
int min(int arr[] , int size)
{
    int i,t=arr[0];
    for(i=1;i<size;i++)
    {
        if(t>arr[i])
            t=arr[i];
    }
    return t;
}
int sum(int arr[],int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
         sum=sum+arr[i];
    }
    return sum;
}
int avge(int arr[],int size)
{
    int i;
    int sum=0.0;
    for(i=0;i<size;i++)
    {
         sum=sum+arr[i];
    }
    return sum/size;
}
int count(int arr[],int size)
{
    int c = sizeof(arr)/sizeof(int);
    return c;
}