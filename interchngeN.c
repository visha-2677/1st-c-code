#include<stdio.h>
int main(){
    float a,b,t;
    printf("a=");
    scanf("%f",&a);
    printf("b=",b);
    scanf("%f",&b);
    t=a;
    a=b;
    b=t;
    printf("a=%f and b=%f",a,b);
}