#include<stdio.h>
void swap(int *x,int *y){
 *x=45;
 *y=23;
}
int main()
{
    int a=5,b=4;
    printf("a=%d and b=%d\n",a,b);
    swap(&a,&b);
    printf("a=%d and b=%d",a,b);
    return 0;
}