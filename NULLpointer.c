#include<stdio.h>
int main()
{
    int a=32;
    int *ptr=NULL;
    
    if(ptr!=NULL)
    {
        printf("enter number a address %d",*ptr);
        
    }
    else{
        printf("pointer is NULL");
    }
    return 0;
}