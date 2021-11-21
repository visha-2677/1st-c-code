#include<stdio.h>
int func1()
{
    static int i=0;
    i++;
    return i;
}
int main()
{
    printf("%d\n",func1());
    printf("%d\n",func1());
    return 0;
}
