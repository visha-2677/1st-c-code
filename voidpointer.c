#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=344;
    float b=1.22;
    void *ptr;
    ptr=&a;
    ptr=&b;
    printf("a=%d\n",*((int*)ptr));
    printf("b=%f\n",*((float*)ptr));
    return 0;
}