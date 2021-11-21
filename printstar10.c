#include <stdio.h>
int main()
{
    int i, j, k, n;
    
    printf("enter number n=");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        for (j = i; j > 1; j--)
        {
            printf(" ");
        }
        for (k = n; k >= i; k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}