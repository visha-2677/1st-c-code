#include <stdio.h>
int main()
{
    int i, j, n, c = 80, k;
    printf("enter number of star n=");
    scanf("%d", &n);
    // printf("******\n");

    for (i=0; i<n; i++)
    {
        for(j=n-1; j>1; j--)
        {
            printf(" ");
        }
        for(k=0; k<=(i*2)+1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}