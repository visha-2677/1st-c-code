#include<stdio.h>
int func1(){
    static int a;
    printf("%d",a);

    return ;
}
int main()
{   int b;
    int func1(b);
    printf("%d",b)
    
    return 0;
}