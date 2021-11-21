#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter numbe star n=");
    scanf("%d",&n);
    for(i=5;i>=1;i--)
      {  
        for(j=5;j>=i;j--){
          printf("*");
      }

    printf("\n");
    }
    return 0;
}