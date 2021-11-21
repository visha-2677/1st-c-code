#include<stdio.h>

int multi(int a,int b){
    return a+b;
}
int main(){
    int i,j,s;
    printf("enter number i and j\n");
    scanf("%d  %d",&i,&j);
    s=multi(i,j);
    printf("sum is %d",s);
    return 0;
}