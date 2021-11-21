#include<stdio.h>
int sum(int a,int b)
{   
    return a+b;
}
int goodafternoon(int (*fptr)(int ,int)){
    printf("goodafterrnoon user\n");
    printf("The sum is %d\n",fptr(1,2));
}
int goodmorning(int (*fptr)(int ,int)){
    printf("goodafmorning user\n");
    printf("The sum is %d\n",fptr(1,2));
}
int main(){
    int (*ptr)(int,int);
    ptr=sum;
    goodafternoon(ptr);
    goodmorning(ptr);
    return 0;

}