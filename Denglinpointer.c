#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    int *ptr=(int *)malloc(sizeof(int));
    free(ptr);       // Denglin pinter meaning latka hula pointer
    ptr=NULL;        // null pointer becouse of null poiner
    return 0;
}