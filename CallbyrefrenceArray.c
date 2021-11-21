#include<stdio.h>

int max(int arr[],int size)
{   int temp=0;
    for(int i=0;i<size;i++)
    {   
        if(temp<arr[i])
        {
            temp=arr[i];
        }
    }
    return temp;
}
int min(int arr[],int size)
{
    int temp=arr[size-1];
    for(int i=0;i<size;i++)
    {   
        if(temp>arr[i])
        {
            temp=arr[i];
        }
    }
    return temp;
}
int avreg(int arr[],int size)
{   int sum=0;
    for(int i=0;i<size;i++)
    {   
        sum=sum+arr[i];
    }
    return sum/size;
}
int main()
{   int n;
    int a[100];
    printf("enter Eliment of Array=");
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        getchar();
    }
    int M=max(a,n);
    int L=min(a,n);
    int A=avreg(a,n);
    printf("Max =%d\n",M);
    printf("Min =%d\n",L);
    printf("Avreg =%d\n",A);

return 0;
}