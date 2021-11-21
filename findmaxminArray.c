#include<stdio.h>
#define maxsize 100
int main(){
    int a[maxsize];
    int i,size,min,max;
    printf("enter size=");
    scanf("%d",&size);
    printf("enter element of array");
    for (int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for (int i=0;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }

    }
    

   printf("maximum valu=%d\n",max);
    printf("minimum valu=%d\n",min);
    return 0;

    
    
}
