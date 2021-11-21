#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int genratrendomenumber(int n)
{
    srand(time(NULL));
    return rand()%n;
}
int greater(char c1,char c2)
{

}
int main()
{   int palyerpoint=0,comppoint=0;
    char playerchar[]={'1','2','3'};
     char name[43];
    printf("welcome rock,paperand secior game enter name=");
    scanf("%s",name);
    for(int i=0;i<3;i++){
    printf("Enter 1.rock , 2.paper and 3.secior choose Number");
    scanf("%d",playerchar);
    }
    printf("enter rendome 1 to 100 number %d",genratrendomenumber(100));
        
        return 0;
}
