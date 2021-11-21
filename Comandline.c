#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("The valu of argc is %d",argc);
    for( int i=0;i<argc;i++)
    {
        printf("argv element %d and valu is %s\n",i,argv[i]);
    }
    return 0;
}
