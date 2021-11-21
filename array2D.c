#include<stdio.h>
int main()
{
    int mark[1][5];
    for(int i=0;i<1;i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("Enter the %d roll.no student marks : ", j+1);
            scanf("%d", &mark[i][j]);
        }
    }
    for(int i=0;i<1;i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("The %d roll.no student marks : %d\n", j+1, mark[i][j]);
        }
    }
    return 0;
    
}
