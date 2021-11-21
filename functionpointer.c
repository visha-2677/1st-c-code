#include<stdio.h>
int sum(int a,int b)
{   
    return a+b;
}
int main()
{
    printf("The sum is=%d\n",sum(1,2));
    int (*fptr)(int ,int);
    fptr=&sum;
    int d=(*fptr)(3,4);
    printf("The new sum is=%d\n",d);
    return 0;
}