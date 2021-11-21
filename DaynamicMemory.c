#include <stdio.h>
#include <stdlib.h>

//use malloc

// int main()
// {
//     int *ptr;
//     ptr=(int*)malloc(3*sizeof(int));
//     for(int i=0;i<3;i++)
//     {
//         printf("Enter %d eliment of nummber=",i);
//         scanf("%d",&ptr[i]);
//     }

//      for(int i=0;i<4;i++)
//     {
//         printf("This  eliment %d  of nummber=%d\n",i,ptr[i]);
//     }
//     return 0;
// }

//use calloc

int main()
{
    int *ptr, n;
    printf("enter eliment n=");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d eliment of nummber=", i); // no number input then all eliment number zero(0) enicialaize
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("This  eliment %d  of nummber=%d\n", i, ptr[i]);
    }

    //use realloc

    printf("enter new eliment n=");
    scanf("%d", &n);
    ptr = (int *)calloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter new %d eliment of nummber=", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("This new eliment %d  of nummber=%d\n", i, ptr[i]);
    }
    return 0;
}
