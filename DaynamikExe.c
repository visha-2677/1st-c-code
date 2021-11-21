#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=0;
    int chars;
    int a,b;
    char *ptr;
    while (i<3)
    {
        printf("Employ %d: Employ charecter : ",i+1);
        scanf("%d",&chars);
        printf("enter a=");
        scanf("%d",&a);
        getchar();
        printf("enter b=");
        scanf("%d",&b);
        getchar();
        ptr=(char *)malloc((chars+1)*sizeof(char));
        printf("Employ id :");
        scanf("%s",ptr);
        printf("Employ id is %s",ptr);
        free(ptr);
        i++;

    }
    return 0;
    
}