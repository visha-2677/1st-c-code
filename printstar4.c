#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter number of  n=");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=n;j>=i;j--){
          //  printf("%d",i);
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}