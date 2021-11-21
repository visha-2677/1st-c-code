#include<stdio.h>
int main(){
    int a,b,c;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    if(a>c){
        if(a<c){
            printf("c is max%d",c);
        }    
        else{
            printf("a is max%d",a);
        }
        }
    else{
        if(b>c){
            printf("b is max%d",b);

        }
        else{
            printf("c is max%d",c);
        }
        }
    
   return 0;
}
