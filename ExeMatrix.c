#include <stdio.h>
int main()
{
    int sum = 0;
    int a[2][3], b[3][2], result[2][2];

    
    printf("Enter first Matrix\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second Matrix\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    //calculate Matrix multipication

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum=0;
        }
    }

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                printf("%d\t",result[i][j]);
            }
            printf("\n");
        }        
 return 0;
 }