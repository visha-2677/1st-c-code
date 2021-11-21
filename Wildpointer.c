#include<stdio.h>
int main()
{
    int a=23;
    int *ptr;//this is Wild pointer
  //  *ptr=43; //this is not good
    ptr=&a;   // this is not Wild pointer
    printf("%d",*ptr);
    return 0;
}