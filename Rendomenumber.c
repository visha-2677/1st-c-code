#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// int main()
// {
//     srand(time(NULL));
//     printf("enter rendome number %d",rand()%100);
//     return 0;
// }
int genratrendomenumber(int n)
{
    srand(time(NULL));
    return rand()%n;
}

int main()
{
        printf("enter rendome 1 to 100 number %d",genratrendomenumber(100));
        return 0;
}