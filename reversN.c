#include<stdio.h>
int main()
{
    int n,rev=0,reminder;
    printf("n=");
    scanf("%d",&n);
    while(n!=0){
        reminder=n%10;
        rev=rev*10+reminder;
        n=n/10;
    }
    printf("revers number=%d",rev);
    
    return 0;

    
}