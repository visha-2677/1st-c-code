#include <stdio.h>
int main()
{
    int n, i, j;
    printf("enter number of n=");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 5; j >= i; j--)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}