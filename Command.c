#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    char* opretion;
    int a,b;
    opretion=argv[1];
    a=atoi(argv[2]);
    b=atoi(argv[3]);
    printf("opretion is %s\n",opretion);
    printf("num 1 is %d\n",a);
    printf("num 2 is %d\n",b);
    if(strcmp(opretion,"add")==0)
    {
        printf("%d",a+b);
    }
    else if(strcmp(opretion,"sub")==0)
    {
        printf("%d",a-b);
    }
    else if(strcmp(opretion,"mul")==0)
    {
        printf("%d",a*b);
    }
    else if(strcmp(opretion,"divid")==0)
    {
        printf("%d",a/b);
    }


    return 0;
}
