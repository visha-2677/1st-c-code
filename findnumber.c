#include <stdio.h>

int main()
{
    float a;
    printf("enter number a=");
    scanf("%f", &a);
    if (a > 0)
    {
        printf("number is positiv");
    }
    else if (a < 0)
    {
        printf("number is nagativ");
    }
    else
    {
        printf("number is zero");
    }
    return 0;
}