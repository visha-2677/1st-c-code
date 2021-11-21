#include<stdio.h>
void arrayrev(int arr[])
{
    for(int i=0;i<7/2;i++)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[6-i];
        arr[6-i]=temp;
    }
    return 0;
}

int main()
{
    int a[7]={1,2,3,4,34,36,23};    
    printf("befor printing array\n");
    for(int i=0;i<7;i++){
    printf("array eliment %d  number %d\n",i,a[i]);
    }
    printf("\nafter printing revers array\n");
    arrayrev(a);
    for(int i=0;i<7;i++){
    printf("array eliment %d revers number %d\n",i,a[i]);
    }
    return 0;
}